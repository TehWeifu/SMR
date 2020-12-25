#include <iostream>

void printPyramid(const unsigned short&);

int main() {
	unsigned short inputRows;

	std::cout << "Introduzca el numero de filas que tiene la piramide: ";
	std::cin >> inputRows;
	printPyramid(inputRows);

	return 0;
}

void printPyramid(const unsigned short& rowNum) {
	int numOfStarts{ -1 };

	for (int i = 0; i <= rowNum; i++) {
		numOfStarts += 2;

		for (int j = 0; j < rowNum * 2 -1; j++) {
			if (j <  (rowNum - (numOfStarts / 2) ) || j > rowNum + (numOfStarts / 2) - 2) std::cout << " ";
			else std::cout << "*";
		}

		std::cout << std::endl;
	}
	return;
}