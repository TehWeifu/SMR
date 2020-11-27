#include <iostream>

int main()
{
	double num1;
	double num2;

	std::cout << "Introduzca dos numeros y pulse enter: ";
	std::cin >> num1 >> num2;

	std::cout << "El resultado de dividir " << num1 << " entre " << num2 << " es " << num1 / num2 << std::endl;

	return 0;
}