#include <iostream>

int main() {
	const short ROWS{ 3 };
	const short COL{ 2 };

	const int matrixA[ROWS][COL]{ {2, 5}, {9, 8}, {6, 10} };
	const int matrixB[ROWS][COL]{ {12, 7}, {8, 10}, {4, 9} };
	int matrixC[ROWS][COL];

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COL; j++) {
			matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
		}
	}

	std::cout << "El resultado de sumar las matrices A + B es: " << std::endl;

	for (const auto& r : matrixC) {
		for (const auto& c : r) {
			std::cout << c << "\t";
		}
		std::cout << std::endl;
	}

	return 0;
}