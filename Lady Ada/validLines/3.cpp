#include<iostream>
#include<fstream>
#include<regex>
#include<string>
#include<set>

using namespace std;

bool isValidLine(const string& line) {
    regex pattern(R"(^\s*([a-zA-Z\s,]+)\s*,\s*([a-zA-Z\s]+)\s*,\s*(v\s*)?\d+(\.\d+)?\s*$)");
    return regex_match(line, pattern);
}

int extractVersion(const string& ver){
    size_t start = ver.find('v');
    if(start == string::npos) return -1;
    start += 1; //incrementing by 1 after finding 'v'


    while(start < ver.size() && ver[start] == ' ' || ver[start] == '\t'){ //if whitespace or tab iss encountered
        start++;
    }

    // ending where 1st occurence of the string or - found
    size_t end = ver.find_first_of(" -", start);

    // if end not found then end till the size of string
    if(end == string::npos){
        end = ver.size();
    }

    return stoi(ver.substr(start, end-start)); //converting the string from start to end to an integer
}

int main(){

    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if(!inputFile.is_open() || !outputFile.is_open()) return 1;
    map<string, int> maxLibraryVersions;
    map<string, map<string, int>> serverLibraryversions;
    set<string> outDatedservers;
    map <string, string> originalservernames;

    string line;

    while(getline(inputFile, line)){
        if(isValidLine(line)){
            stringstream ss(line);
            string serverName, libraryName, version;
            getline(ss, serverName, ',');
            getline(ss, libraryName, ',');
            getline(ss, version);

            originalservernames[serverName] = serverName;
            int num =  extractVersion(version);

            if(num != -1){
                maxLibraryVersions[libraryName] = max(maxLibraryVersions[libraryName], num);
                serverLibraryversions[serverName][libraryName] = num;
            }

            
        }
    }

    // checking for outdated libraries
    for(const auto& server: serverLibraryversions){
        const string& srvname = server.first; //current server name

        for(const auto& lib : server.second){
            const string& libname = lib.first; //library name 
            int vernum = lib.second;

            if(maxLibraryVersions[libname] > vernum){ //check if the server has outdated version of library
                outDatedservers.insert(srvname);
                break;
            }
        }
    }

    for(const string& srv : outDatedservers){
        outputFile << originalservernames[srv] <<endl;
    }

    inputFile.close();
    outputFile.close();

    cout<<endl;

    return 0;
}