#include <iostream>
#include <vector>
#include <string>

int main() {
    // Initialize the vector with strings
    std::vector<std::string> myStrings = {"B123", "C234", "A345", "C15","B177""G3003","C235","B179"};

    // Iterate through each element and check if it starts with 'B'
    for (const std::string& str : myStrings) {
        if (str.front() == 'B') {
            std::cout << str << std::endl;
            return 0;
        }
    }
}