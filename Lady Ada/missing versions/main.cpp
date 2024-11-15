// Identify and list servers that have missing library versions.
// Use regex to find and report these missing entries.
// Write the server names with missing versions to an output.txt file.

#include<iostream>
#include<sstream>
#include<string>
#include<fstream>
#include<regex>
#include<set>

using namespace std;

bool isValidline(const string& line){
    regex pattern(R"(^\s*[a-zA-Z]+,\s*[a-zA-Z]+,\s*v\d+\s*$)");
    return regex_match(line, pattern);
}

int main(){

    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if(!(inputFile || outputFile)){
        return -1;
    }
    
    string line;

    set <string> missingServerNames;

    while(getline(inputFile, line)){
        stringstream ss(line);
        cout<<"\n Reading line: "<<line<<endl;
        
        string serverName;
        string version;

        if(!(isValidline(line))){
            getline(ss, serverName, ',');
            missingServerNames.insert(serverName);
        } 
    }

    for(string srv : missingServerNames){
        outputFile<<srv<<endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;

}