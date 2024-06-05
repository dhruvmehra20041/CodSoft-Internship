#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int countWords(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Could not open the file " << filename << endl;
        return -1;
    }
    
    string word;
    int wordCount = 0;
    
    while (file >> word) {
        ++wordCount;
    }
    
    file.close();
    return wordCount;
}

int main() {
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;
    
    int wordCount = countWords(filename);
    
    if (wordCount != -1) {
        cout << "The number of words in the file " << filename << " is: " << wordCount << endl;
    }
    
    return 0;
}
