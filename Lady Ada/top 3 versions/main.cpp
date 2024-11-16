// Parse the file to find the count of unique libraries for each server.
// Print the top 3 servers with the most unique libraries in descending order of count to output.txt.
#include<iostream>
#include<sstream>
#include<fstream>
#include<set>
#include<regex>
#include<string>
#include<vector>

using namespace std;

int main(){
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if(!(inputFile || outputFile)){
        return -1;
    }

    string line;

    map<string, set<string>>serverLibraries;

    while(getline(inputFile, line)){
        stringstream ss(line);

        cout<<"\n Reading line: "<<line<<endl;

        string server, library, version;

        getline(ss, server, ',');
        getline(ss, library, ',');
        getline(ss, version);

        serverLibraries[server].insert(library);
    }

    inputFile.close();
    outputFile.close();
    return 0;
}