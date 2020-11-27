#include <iostream>
#include <conio.h>

int main()
{
	char letter;

	std::cout << "Introduzca una letra y pulse enter: ";
	letter = _getche(); // have to use underscore here because conoi.h is NOT standard and the compiler will complain.

	std::cout << "\nLa letra que usted ha tecleado es " << letter << std::endl;
	return 0;
}