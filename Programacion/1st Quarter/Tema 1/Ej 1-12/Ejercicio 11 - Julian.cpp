#include <iostream>

int main()
{
	double num1, num2, num3;

	std::cout << "Introduzca el primer numero: ";
	std::cin >> num1;
	std::cout << "Introduzca el segundo numero: ";
	std::cin >> num2;
	std::cout << "Introduzca el tercer numero: ";
	std::cin >> num3;

	std::cout << "\nLa media de " << num1 << ", " << num2 << " y " << num3
		<< " es igual a: " << (num1 + num2 + num3) / 3;
	return 0;
}