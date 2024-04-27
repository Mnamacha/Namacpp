#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> 
#include <sstream>

using namespace std;

// reversing a string
string reverseString(const string& str) {
    std::stringstream ss(str);
    string text, result;
        while (ss>> text) {
            result = text + " " + result;
        }
    return result.substr(0, result.length() - 1);
}

// capitalize the second letter of each word in the string
string capitalizeSecondLetters(const string& str) {
    stringstream ss(str);
    string text, result;

    while(ss >> text) {
            if (text.length() > 1) {
                text[1] = toupper(text[1]);
            }
            result += text + " ";
            }
        return result.substr(0, result.length() - 1);
        }
        



// function to count vowels
    int countVowels(const string& str) {
    int numVowels = 0;
    for (char c : str){

     if (isalpha(c) && (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            numVowels++;
        }
    }
    return numVowels;

}
// Function to count words
int countWords(const string& str) {
    int numWords = count_if(str.begin(), str.end(), [](char c) { return isspace(c); }) + 1;
    return numWords;
}

int main() {
    ifstream inFile("text.txt"); // Replace file
    if (!inFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    string fileData;
    string line;
    while (getline(inFile, line)) {
        fileData += line + "\n"; // Read the entire file into fileData
    }

    int numVowels = countVowels(fileData);
    int numWords = countWords(fileData);
    string reversedStatement = reverseString(fileData);

     // Capitalize second letters
    string capitalizedStatement = capitalizeSecondLetters(fileData);

    cout << "Number of vowels: " << numVowels << endl;
    cout << "Number of words: " << numWords << endl;
    cout << "Reversed statement:\n" << reversedStatement << endl;
    cout << "Capitalized second letters:\n" << capitalizedStatement << endl;

    return 0;

}

