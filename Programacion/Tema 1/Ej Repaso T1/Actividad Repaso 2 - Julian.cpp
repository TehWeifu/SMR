#include <iostream>
#include <string>

int main()
{
	std::string name;
	unsigned short age;

	std::cout << "Introduzca el nombre: ";
	std::cin.ignore(1);
	std::getline(std::cin, name);

	std::cout << "Introduzca la edad: ";
	std::cin >> age;

	std::cout << name << " es " << (age < 18 ? "menor" : "mayor") << " de edad." << std::endl;
	return 0;
}