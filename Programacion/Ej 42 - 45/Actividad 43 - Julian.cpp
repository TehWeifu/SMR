#include <iostream>

int main() {
	const short ROWS{ 2 };
	const short COL{ 12 };

	const int matDays[ROWS][COL]{ {1, 2, 3 , 4, 5, 6, 7, 8, 9, 10, 11, 12},
								{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} };

	for (int i = 0; i < COL; i++) {
		if (matDays[1][i] == 30) std::cout << "El mes " << matDays[0][i] << " tiene 30 dias." << std::endl;
	}

	return 0;
}