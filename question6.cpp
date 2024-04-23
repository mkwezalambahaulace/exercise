#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // for std::toupper

// Function to reverse a string
std::string reverse(const std::string& str) {
    std::string reversed;
    for (int i = str.length() - 1; i >= 0; --i) {
        reversed += str[i];
    }
    return reversed;
}

// Function to capitalize the second letter of each word
std::string capitalizeSecondLetter(const std::string& str) {
    std::string result;
    bool capitalizeNext = true;

    for (char ch : str) {
        if (std::isalpha(ch)) {
            if (capitalizeNext) {
                result += std::toupper(ch);
                capitalizeNext = false;
            } else {
                result += ch;
            }
        } else {
            result += ch;
            capitalizeNext = true;
        }
    }

    return result;
}

int main() {
    // Open the input file named "input.txt"
    std::ifstream inputFile("input.txt");

    // Check if the file is opened
    if (!inputFile.is_open()) {
        std::cerr << "Error opening the file!" << std::endl;
        return 1;
    }

    std::string filedata;
    std::string line;

    // Reading each line of the file and store it in filedata
    while (getline(inputFile, line)) {
        filedata += line;
    }

    // Closing the file
    inputFile.close();

    // Count vowels
    int vowel_Count = 0;
    for (char ch : filedata) {
        if (std::to_lower(ch)) == 'a' ||
         std::to_lower(ch) == 'e'
         return 0;
    }
}