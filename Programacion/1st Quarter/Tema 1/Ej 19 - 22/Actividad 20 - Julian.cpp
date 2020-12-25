#include <iostream>
#include <string>

int main()
{
	char letter;

	std::cout << "Escriba una letra del abecedario: ";
	std::cin >> letter;

	// Si se introduce la ñ ocurre un error pero es lo que hay

	letter = std::tolower(letter);

	if (std::isalnum(letter)) {
		switch (letter)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			std::cout << "Ha introducido una vocal" << std::endl;
			break;
		default:
			std::cout << "Ha introducido una consonante" << std::endl;
			break;
		}
	}
	else {
		std::cout << "Ha introducido un caracter no valido." << std::endl;
	}

	return 0;
}