#include <iostream>

int main() {
	std::cout << "Abecedario del reves: ";

	for (int i = 122; i >= 97 ; i--) {
		std::cout << static_cast<char>(i);
		if (i == 111) std::cout << static_cast<char>(164);
	}
	return 0;
}