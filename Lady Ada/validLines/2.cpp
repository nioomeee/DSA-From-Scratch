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

string normalizeServerNames(const string& serverName) {
    string normalized = serverName;

    // Convert to lowercase
    for (size_t i = 0; i < normalized.size(); i++) {
        if (normalized[i] >= 'A' && normalized[i] <= 'Z') {
            normalized[i] += ('a' - 'A');
        }
    }

    // Trim leading and trailing spaces/tabs
    size_t start = 0, end = normalized.size();
    while (start < end && (normalized[start] == ' ' || normalized[start] == '\t')) {
        start++;
    }
    while (end > start && (normalized[end - 1] == ' ' || normalized[end - 1] == '\t')) {
        end--;
    }

    return normalized.substr(start, end - start);
}

int main() {

    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile.is_open() || !outputFile.is_open()) {
        cerr << "\nError opening the file" << endl;
        return 1;
    }

    string line;
    set<string> uniqueServerNames;

    while (getline(inputFile, line)) {
        if (isValidLine(line)) {
            size_t commaPos = line.find(',');

            if (commaPos != string::npos) {
                string serverName = line.substr(0, commaPos);
                serverName = normalizeServerNames(serverName);
                uniqueServerNames.insert(serverName);
            }
        } else {
            cerr << "Invalid line: " << line << endl;
        }
    }

    // Print all unique server names for debugging
    cerr << "Unique Server Names: " << endl;
    for (const string& serverName : uniqueServerNames) {
        cerr << "'" << serverName << "'" << endl;
    }

    outputFile << uniqueServerNames.size() << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}
