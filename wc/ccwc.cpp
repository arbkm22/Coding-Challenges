#include<bits/stdc++.h>
#include <cstddef>
#include <cstring>
#include <fstream>
#include <string>
using namespace std;

size_t sizeCalc(string fileName) {
    ifstream inputFile(fileName);
    if (!inputFile) {
        cerr << "Error opening file: " << fileName << endl;
        return -1;
    }
    char ch;
    string totalWord;
    while (inputFile.get(ch)) {
        totalWord += ch;
    }
    size_t strSize = totalWord.size();
    inputFile.close();

    return strSize;
}

int numOfLines(string fileName) {
    ifstream inputFile(fileName);
    int lineNum = 0;
    string line;
    if (!inputFile) {
        cerr << "Error opening file: " << fileName << endl;
        return -1;
    }
    while (getline(inputFile, line)) {
        lineNum += 1;
    }
    
    return lineNum;
}

int numOfWords(string fileName) {
    ifstream inputFile(fileName);
    int wordsCount = 0;
    string word;
    if (!inputFile) {
        cerr << "Error opening file: " << fileName << endl;
    }
    while (inputFile >> word) {
        wordsCount += 1;
    }

    return wordsCount;
}

int main(int argc, char *argv[]) {
    
    if (strcmp(argv[1], "-c") == 0) { 
        int fileSize = sizeCalc(argv[2]);
        cout << fileSize << " " << argv[2] << endl;
    }
    else if (strcmp(argv[1], "-l") == 0) {
        int numberOfLines = numOfLines(argv[2]);
        cout << numberOfLines << " " << argv[2] << endl;
    }
    else if (strcmp(argv[1], "-w") == 0) {
        int numberOfWords = numOfWords(argv[2]);
        cout << numberOfWords << " " << argv[2] << endl;
    }
    else {
        int numberOfLines = numOfLines(argv[1]);
        int numberOfWords = numOfWords(argv[1]);
        int fileSize = sizeCalc(argv[1]);
        cout << numberOfLines << " " << numberOfWords << " " << fileSize << " " << argv[1] << endl;
    }

    return 0;
}
