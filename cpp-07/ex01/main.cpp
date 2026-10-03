#include "iter.hpp"
#include <iostream>

#define STD 		"\033[0m"
#define GREYBGBOLD 	"\033[48;5;237m\033[1m"
#define GREEN 		"\033[38;5;34m\033[48;5;193m"
#define PINK 		"\033[38;5;199m\033[48;5;225m"
#define BLUE 		"\033[38;5;44m\033[48;5;159m"

// so there, as long as you give to iter the right type function and array,
// it works. 

void printInt(int &x)
{
	std::cout << GREEN << x << " " << STD;
}

void printChar(char &c)
{
	std::cout << BLUE << c << " " << STD;
}

void printString(const std::string &s)
{
	std::cout << PINK << s << " " << STD;
}

int main()
{
	std::cout << GREYBGBOLD << "  --- 𝕴nt array test ---   " << STD << std::endl << std::endl;
	int int_arr[5] = {1, 2, 3, 4, 5};
	iter(int_arr, 5, printInt);
	std::cout << std::endl << std::endl;

	std::cout << GREYBGBOLD << "  --- 𝕮har array test ---  " << STD << std::endl << std::endl;
	char char_arr[5] = {'a', 'b', 'c', 'd', 'e'};
	iter(char_arr, 5, printChar);
	std::cout << std::endl << std::endl;

	std::cout << GREYBGBOLD << " --- 𝕾tring array test --- " << STD << std::endl << std::endl;
	std::string str_arr[3] = {"Hello", "CPP", "07"};
	iter(str_arr, 3, printString);
	std::cout << std::endl << std::endl;
	return 0;
}
