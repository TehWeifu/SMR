#include <iostream>

int main() {
	std::cout << "Numeros entre 1 y 100 divisibles entre 7: ";

	for (int i = 7; i < 100; i += 7) {
		std::cout << i << ' ';
	}
	return 0;
}