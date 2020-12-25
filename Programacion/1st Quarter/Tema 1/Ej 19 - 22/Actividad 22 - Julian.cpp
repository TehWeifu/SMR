#include <iostream>
int main()
{
	int num;

	std::cout << "Escribe un numero entero: ";
	std::cin >> num;

	std::cout << "El numero " << num << (num % 3 ? " no" : "") << " es multiplo de 3." << std::endl;
	return 0;
}