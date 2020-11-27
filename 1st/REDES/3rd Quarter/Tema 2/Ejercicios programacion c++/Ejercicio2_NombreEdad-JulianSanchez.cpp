#include <iostream>
#include <string>

int main()
{
	std::string name;
	int age;

	std::cout << "Escriba su nombre y pulse enter: ";
	std::getline(std::cin, name);

	std::cout << "Escriba su edad y pulse enter: ";
	std::cin >> age;

	std::cout << "\n\nSu nombre es: " << name << std::endl << "Su edad es: " << age << std::endl;

	return 0;
}