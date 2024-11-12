// Write a program which will read integers from an input file, sort them, and print the
// sorted result to an output file.
#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<string>
#include<cctype>

using namespace std;

int main(){
    
    ifstream inputFile("input.txt");

    if(!inputFile){
        cerr<<"\n Error opening input file"<<endl;
        return 1;
    }
    vector<int> numbers;
    const int MAX_INT = 2147483647;
    string line;

    while(getline(inputFile, line)){
        stringstream ss(line);
        int number;
        bool multiple = false;
        bool isValidLine = true;

        while(ss >> number){
            if(ss >> number){
                multiple = true;
                break;
            }

            if(number > MAX_INT || number < 0){
                isValidLine = false;
                break;
            }

            if(multiple || !isValidLine){
                continue;
            }

            
            stringstream ss2(line);
            ss2 >> number;
            numbers.push_back(number);
        }
    }
    inputFile.close();

    sort(numbers.begin(), numbers.end());

    ofstream outputFile("output.txt");

    if(!outputFile){
        cerr<<"\n Error opening output File";
        return 1;
    }

    for(int num : numbers){
        outputFile << num << endl;
    }
    
    outputFile.close();

    cout<<"\n The sorted numbers have been printed to output file output.txt"<<endl;

    return 0;
}