#include <iostream>
#include <string>

int main() {
    // Dynamically allocate an integer
    int* dynamicInt = new int;
    
    // Dynamically allocate a string
    std::string* dynamicString = new std::string;
    
    // Prompt user for input
    std::cout << "Enter an integer value: ";
    std::cin >> *dynamicInt;
    
    std::cout << "Enter a string value: ";
    std::cin.ignore(); // Ignore the newline character left in the stream
    std::getline(std::cin, *dynamicString);
    
    // Output values
    std::cout << "The value of the dynamically allocated integer: " << *dynamicInt << std::endl;
    std::cout << "The value of the dynamically allocated string: " << *dynamicString << std::endl;
    
    // Free memory
    delete dynamicInt;
    delete dynamicString;
    
    return 0;
}
