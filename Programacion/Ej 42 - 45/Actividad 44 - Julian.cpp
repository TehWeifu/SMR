#include <iostream>

int main() {
	const short ROWS{ 3 };
	const short COL{ 4 };

	int matBuil[ROWS][COL];

	int maxHou{ -1 };
	int maxHouRow{ -1 };
	int maxHouCol{ -1 };

	int maxRow{ -1 };
	int maxRowPos{ 0 };
	int tmpRow{ 0 };

	int maxDoor{ -1 };
	int maxDoorPos{ 0 };

	int sumRows[ROWS]{};
	int sumCol[COL]{};

	for (int i = 0; i < ROWS; i++) {
		tmpRow = 0;

		for (int j = 0; j < COL; j++) {
			std::cout << "Introduzca los habitantes del pisto " << i + 1 << ", puerta " << static_cast<char>('A' + j) << ": ";
			std::cin >> matBuil[i][j];

			if (matBuil[i][j] > maxHou) {
				maxHou = matBuil[i][j];
				maxHouRow = i;
				maxHouCol = j;
			}

			tmpRow += matBuil[i][j];
			sumCol[j] += matBuil[i][j];
			sumRows[i] += matBuil[i][j];
		}

		if (tmpRow > maxRow) {
			maxRow = tmpRow;
			maxRowPos = i;
		}
	}

	for (int i = 0; i < COL; i++) {
		if (sumCol[i] > maxDoor) {
			maxDoor = sumCol[i];
			maxDoorPos = i;
		}
	}

	std::cout << "\n\nLa vivienda con mas habitantes es el piso " << maxHouRow + 1
		<< ", puerta " << static_cast<char>('A' + maxHouCol) << " con " << maxHou << " habitantes." << std::endl;

	std::cout << "\nEl piso " << maxRowPos + 1 << " es el que mas habitantes tiene con " << maxRow << std::endl;

	std::cout << "La puerta " << static_cast<char>('A' + maxDoorPos) << " es la que mas habitantes tiene con " << maxDoor << std::endl << std::endl;

	for (int i = 0; i < ROWS; i++) {
		std::cout << "El piso " << i + 1 << " tiene una media de "
			<< static_cast<float>(sumRows[i]) / COL << " habitantes." << std::endl;
	}

	std::cout << std::endl << std::endl;

	return 0;
}