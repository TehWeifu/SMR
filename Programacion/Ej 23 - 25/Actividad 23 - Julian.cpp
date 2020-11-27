#include <iostream>

int main() {
	const unsigned pass{ 9876 };
	unsigned guess;

	std::cout << "Tecle la password para acceder al programa: ";
	std::cin >> guess;

	while (guess != pass) {
		std::cout << "Password incorrecta, vuelva a intentarlo ";
		std::cin >> guess;			
	}

	std::cout << "Password correcta" << std::endl;

	return 0;
}