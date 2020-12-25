#include <iostream>

int main() {
	std::cout << "Numeros entre 0 y 100 multiplos de 5 pero no de tres" << std::endl;

	for (int i = 0; i < 101; i += 5) {
		if (i % 3) std::cout << i << std::endl;
	}
	return 0;
}