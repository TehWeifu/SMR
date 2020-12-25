#include <iostream>
int main()
{
	int num1;
	int num2;
	char op;

	std::cout << "Escriba el primer numero: ";
	std::cin >> num1;

	std::cout << "Escriba el segundo numero: ";
	std::cin >> num2;

	std::cout << "Escribe la operacion que desees realizar (+/-): ";
	std::cin >> op;

	std::cout << "El resultado de la operacion es " << (op == '+' ? num1 + num2 : num1 - num2);
	std::cout << std::endl;
	return 0;
}