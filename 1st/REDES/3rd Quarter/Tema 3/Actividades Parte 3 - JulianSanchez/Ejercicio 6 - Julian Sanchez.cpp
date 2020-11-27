#include <iostream>

int main()
{
	short int num;
	do
	{
		std::cout << "Introduzca un numero entero entre 1 y 20: ";
		std::cin >> num;

		if (num > 20 || num < 1)
		{
			std::cout << "El numbero que ha introducido no es valido" << std::endl << std::endl;
		}

	} while (num > 20 || num < 1);

	std::cout << "Numeros entre " << num << " y 20: ";

	while (num < 21)
	{
		std::cout << num++ << ' ';
	}
	std::cout << std::endl;
	return 0;
}