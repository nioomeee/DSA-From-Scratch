// Validates if the email format is correct.
// Extracts only unique, valid email addresses from the file.
// Outputs the count of unique emails and prints them to output.txt.
#include<iostream>
#include<fstream>
#include<set>
#include<regex>
#include<string>
#include<sstream>
using namespace std;

bool validLine(const string& line){
    regex pattern(R"(^\s*[a-zA-Z\s]+,\s*[a-zA-Z0-9._%+-]+@[a-zA-Z\d.-]+\.[a-zA-Z]{2,6}\s*$)");
    return regex_match(line, pattern);
}

bool validEmail(const string& email){
    regex pattern(R"(^[\w\.-]+@[a-zA-Z\d.-]+\.[a-zA-Z]{2,6}$)");
    return regex_match(email, pattern);
}

int main(){
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if(!(inputFile.is_open() && outputFile.is_open())){
        return -1;
    }
    string line;

    set<string> uniqueEmails;

    while(getline(inputFile, line)){

        cout<<"\n Reading line: "<<line<<endl;

        if(validLine(line)){
            stringstream ss(line);
            string name, email; 
            getline(ss, name, ',');
            getline(ss, email);

            cout<<"\n Name = "<<name<<" | Email : "<<email<<endl;

            email = regex_replace(email, regex("^\\s+|\\s+$"), "");

            if(validEmail(email)){
                uniqueEmails.insert(email);
            }
        }
    }

    outputFile<<uniqueEmails.size()<<endl;

    inputFile.close();
    outputFile.close();

    return 0;
}