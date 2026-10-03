#include <iostream>
#include "Array.hpp"

#define STD 		"\033[0m"
#define GREYBGBOLD 	"\033[48;5;237m\033[1m"
#define GREEN 		"\033[38;5;34m\033[48;5;193m"
#define PINK 		"\033[38;5;199m\033[48;5;225m"
#define BLUE 		"\033[38;5;44m\033[48;5;159m"

// this last exercice is about reproducing a basic template like list or vector.
// It is all about creating an array of a specific type, and then create some rules
// to manipulate this array.

int main()
{
    std::cout << GREYBGBOLD << "  --- 𝕴nt Array test ---  " << STD << std::endl << std::endl;
    Array<int> numbers(5);
    std::cout << "Size: " << numbers.getSize() << std::endl;
    for (unsigned int i = 0; i < numbers.getSize(); i++)
        std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;

    std::cout << std::endl << GREYBGBOLD << " --- 𝕯eep Copy Proof test ---  " << STD << std::endl << std::endl;
    Array<int> copy = numbers;
    copy[0] = 42;
    std::cout << "Original[0]: " << numbers[0] << std::endl;
    std::cout << "Copy[0]: " << copy[0] << std::endl;

    std::cout << std::endl << GREYBGBOLD << "--- 𝕰xception Handling test ---" << STD << std::endl << std::endl;
    try {
        std::cout << numbers[10] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << std::endl << GREYBGBOLD << "    --- 𝕾tring Array test ---    " << STD << std::endl << std::endl;
    Array<std::string> words(4);
    words[0] = "Hello";
    words[1] = "my";
    words[2] = "name";
    words[3] = "is";
    std::cout << words[0] << " " << words[1] << " " << words[2] << " " << words[3] << std::endl;

    return 0;
}
