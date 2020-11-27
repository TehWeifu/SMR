#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	char uwu;
	std::string vowels{ "AEIOUaeiou" };
	std::cout << "Introduzca una letra: ";
	std::cin >> uwu;


	if (std::find(vowels.begin(), vowels.end(), uwu) != vowels.end()) {
		std::cout << "Ha introducido una vocal" << std::endl;
	}
	else {
		std::cout << "Ha instroducido una consonante" << std::endl;
	}
	return 0;
}