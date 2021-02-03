#include <iostream>

int main() {
	const unsigned short SIZE{ 10 };
	int arr[SIZE];

	int* pointerToSmaller{ nullptr };
	int* pointerToBigger{ nullptr };

	for (size_t i = 0; i < SIZE; i++) {
		std::cout << "Introduzca un numero entero (" << i + 1 << "/" << SIZE << "): ";
		std::cin >> *(arr + i);
	}

	pointerToBigger = arr;
	pointerToSmaller = arr;

	for (size_t i = 1; i < SIZE; i++) {
		if (*(arr + i) < *pointerToSmaller) pointerToSmaller = arr + i;
		if (*(arr + i) > *pointerToBigger) pointerToBigger = arr + i;
	}

	std::cout << "El numero mas pequeno es " << *pointerToSmaller << ". Se encuentra en la posicion " << pointerToSmaller - arr << " del array." << std::endl;
	std::cout << "El numero mas grande es " << *pointerToBigger << ". Se encuentra en la posicion " << pointerToBigger - arr << " del array." << std::endl;

	return 0;
}