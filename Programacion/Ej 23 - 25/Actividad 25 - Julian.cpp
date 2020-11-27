#include <iostream>

int main() {
	const unsigned pass{ 9876 };
	unsigned guess;

	do {
		std::cout << "Introduzca su clave numerica: ";
		std::cin >> guess;

		std::cout << "Password " << (guess == pass ? "correcta" : "incorrecta") << std::endl;

	} while (guess != pass);
	return 0;
}