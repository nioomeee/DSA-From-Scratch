#include<iostream>
#include<fstream>
#include<regex>
#include<string>

using namespace std;

bool isvalidLine(const string& line){
    regex pattern(R"(^\s*[a-zA-Z\s]+,\s*[a-zA-Z\s]+,\s*v\s*\d+(-[a-zA-z\d]+)?\s*$)");
    return !line.empty() && regex_match(line, pattern);
}

int main(){

    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if(!inputFile.is_open() || !outputFile.is_open()){
        cerr<<"\n Error opening the file"<<endl;
        return 1;
    }

    string line;
    int count = 0;

    while(getline(inputFile, line)){
        if(isvalidLine(line)){
            count++;
        }
    }

    outputFile << count <<endl;
    return 0;
}