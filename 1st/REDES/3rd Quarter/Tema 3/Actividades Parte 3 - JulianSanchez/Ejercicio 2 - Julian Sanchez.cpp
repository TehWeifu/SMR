#include <iostream>

int main()
{
	constexpr double pi = 3.14159;
	double radius;

	std::cout << "Introduzca el radio de un circulo: ";
	std::cin >> radius;

	if (radius < 0)
	{
		radius = -radius;
	}

	std::cout << std::endl;

	std::cout << "Para un circulo de radio " << radius << ":" << std::endl;
	std::cout << "-> El diametro es: " << radius * 2 << std::endl;
	std::cout << "-> La longitud de circunferencia es: " << radius * 2 * pi << std::endl;
	std::cout << "-> El area es: " << radius * radius * pi << std::endl;

	return 0;
}