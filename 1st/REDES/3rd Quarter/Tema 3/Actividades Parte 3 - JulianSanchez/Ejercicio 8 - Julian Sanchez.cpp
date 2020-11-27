#include <iostream>
#include <conio.h>

int main()
{
	char menu;
	double num1, num2;
	do
	{
		std::cout << "Introduzca un numero: ";
		std::cin >> num1;
		std::cout << "Introduzca un numero: ";
		std::cin >> num2;

		std::cout << "La suma de " << num1 << " mas " << num2 << " es igual a " << num1 + num2 << std::endl;

		std::cout << "Desea realizar otra suma (s/n)?: ";
		menu = _getche();

		std::cout << std::endl << std::endl;

	} while (menu == 's');
	return 0;
}