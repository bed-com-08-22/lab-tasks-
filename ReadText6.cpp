#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

// Function to count vowels in a string
int countVowels(const string& str) {
    int count = 0;
    string vowels = "aeiouAEIOU";
    for (char ch : str) {
        if (vowels.find(ch) != string::npos) {
            count++;
        }
    }
    return count;
}

// Function to count words in a string
int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char ch : str) {
        if (isspace(ch)) {
            inWord = false;
        } else {
            if (!inWord) {
                count++;
                inWord = true;
            }
        }
    }
    return count;
}

// Function to reverse a string
string Reverse(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

// Function to capitalize the second letter of each word in a string
string capitalizeSecondLetter(const string& str) {
    string result = str;
    bool capitalize = false;
    for (char& ch : result) {
        if (isalpha(ch)) {
            if (capitalize) {
                ch = toupper(ch);
                capitalize = false;
            } else {
                capitalize = true;
            }
        } else {
            capitalize = false;
        }
    }
    return result;
}

int main() {
    ifstream inputFile("fileData.txt");
    string fileData;

    // Read contents of the file into a string variable
    if (inputFile.is_open()) {
        getline(inputFile, fileData);
        inputFile.close();
    } else {
        cout << "Error: Unable to open file." << endl;
        return 1;
    }

    // Output file contents
    cout << "File contents: " << fileData << endl;

    // Count vowels
    int vowelCount = countVowels(fileData);
    cout << "Number of vowels: " << vowelCount << endl;

    // Count words
    int wordCount = countWords(fileData);
    cout << "Number of words: " << wordCount << endl;

    // Reverse the statement
    string reversedStatement = Reverse(fileData);
    cout << "Reversed statement: " << reversedStatement << endl;

    // Capitalize second letter of each word
    string capitalizedStatement = capitalizeSecondLetter(fileData);
    cout << "Capitalized statement: " << capitalizedStatement << endl;

    return 0;
}
