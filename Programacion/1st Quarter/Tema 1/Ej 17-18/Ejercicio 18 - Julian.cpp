#include <iostream>
#include <string>

int main()
{
	std::string guess;
	const std::string pass{ "Tobalcaide" };

	std::cout << "Introduzca la contrasena: ";
	std::cin >> guess;

	std::cout << (guess == pass ? "Contrasena correcta" : "Contrasena incorrecta") << std::endl;
	return 0;
}