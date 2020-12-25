#include <iostream>
int main()
{
	int num1;
	int num2;
	char op;

	std::cout << "Escriba un numero: ";
	std::cin >> num1;

	std::cout << "Escribe otro numero: ";
	std::cin >> num2;

	std::cout << "Escribe la operacion que quieres realizar (+/-): ";
	std::cin >> op;

	std::cout << "El resultado de la operacion es ";

	switch (op)
	{
	case '+':
		std::cout << num1 + num2;
		break;
	default:
		std::cout << num1 - num2;
		break;
	}

	std::cout << std::endl;

	return 0;
}