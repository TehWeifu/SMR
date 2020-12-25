#include <iostream>
#include <string>

int main()
{
	double num1;
	double num2;
	double guess;
	char op;

	std::cout << "Introduzca el primer numero: ";
	std::cin >> num1;
	std::cout << "Introduzca el segundo numero: ";
	std::cin >> num2;
	std::cout << "Introduzca la operacion (+, -, * , /):";
	std::cin >> op;
	std::cout << "Introduzca el resultado de " << num1 << " " << op << " " << num2 << ":";
	std::cin >> guess;

	switch (op)
	{
	case '*':
		if (num1 * num2 == guess) {
			std::cout << "Has acertado." << std::endl;
		}
		else {
			std::cout << "Has fallado." << std::endl;
		}
		break;
	case '/':
		if (num1 / num2 == guess) {
			std::cout << "Has acertado." << std::endl;
		}
		else {
			std::cout << "Has fallado." << std::endl;
		}
		break;
	case '+':
		if (num1 + num2 == guess) {
			std::cout << "Has acertado." << std::endl;
		}
		else {
			std::cout << "Has fallado." << std::endl;
		}
		break;
	case '-':
		if (num1 - num2 == guess) {
			std::cout << "Has acertado." << std::endl;
		}
		else {
			std::cout << "Has fallado." << std::endl;
		}
		break;
	default:
		std::cout << "Has introducido un operador no valido." << std::endl;
		break;
	}
	return 0;
}