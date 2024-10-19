#include<bits/stdc++.h>
#include <cstddef>
#include <fstream>
using namespace std;


size_t sizeCalc(string fileName) {
    ifstream inputFile(fileName);
    if (!inputFile) {
        cerr << "Error opening the file" << endl;
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

int main(int argc, char *argv[]) {
    if (strcmp(argv[1], "-c") == 0) { 
        int fileSize = sizeCalc(argv[2]);
        cout << fileSize << " " << argv[2] << endl;
    } else {
        cout << "incorrect paramter" << endl;
    }

    return 0;
}
