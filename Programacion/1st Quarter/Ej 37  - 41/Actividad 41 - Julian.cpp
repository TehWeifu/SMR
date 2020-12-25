#include <iostream>

int main() {
	const short SIZE = 10;
	float vecOfGrades[SIZE];
	float maxGrade{ -1 };
	int maxPos{ 0 };

	for (int i = 0; i < SIZE; i++) {

		do {
			std::cout << "Introduzca una nota entre 0 y 10 (" << i + 1 << " de 10): ";
			std::cin >> vecOfGrades[i];
		} while (vecOfGrades[i] < 0 || vecOfGrades[i] > 10);

		if (vecOfGrades[i] > maxGrade) {
			maxGrade = vecOfGrades[i];
			maxPos = i;
		}
	}

	std::cout << "\nLa nota mas alta ha sido " << maxGrade;
	std::cout << "\nLa nota se situa en la posicion: " << maxPos << std::endl;

	return 0;
}