#include <iostream>

int main() {
	const short SIZE{ 40 };
	float vecGrades[SIZE];

	int sum{ 0 };

	int max{ -1 };
	int maxPos{ 0 };

	int min{ 11 };
	int minPos{ 0 };

	int menu{ -1 };

	for (int i = 0; i < SIZE; i++) {

		do {
			std::cout << "Introduzca la nota del alumno (" << i + 1 << "/" << SIZE << "): ";
			std::cin >> vecGrades[i];

			if (vecGrades[i] < 0.0 || vecGrades[i] > 10.0) {
				std::cout << "Error la nota tiene que estar entre 0 y 10." << std::endl;
			}

		} while (vecGrades[i] < 0.0 || vecGrades[i] > 10.0);

		if (vecGrades[i] < min) {
			min = vecGrades[i];
			minPos = i;
		}

		if (vecGrades[i] > max) {
			max = vecGrades[i];
			maxPos = i;
		}

		sum += vecGrades[i];
	}

	std::cout << "\nElija una opcion:\n\t1. Listar notas\n\t2. Calcular la media\n\t3. Calcular el menor\n\t4. Calcular el mayor" << std::endl;

	while (menu != 0) {
		if (menu == 1) {
			for (int i = 0; i < SIZE; i++) {
				std::cout << "La nota del alumno " << i + 1 << " es: " << vecGrades[i] << std::endl;
			}
		}
		else if (menu == 2) {
			std::cout << "La media de clase es: " << static_cast<float>(sum) / SIZE << std::endl;
		}
		else if (menu == 3) {
			std::cout << "La menor nota es un " << min << " del alumno " << minPos + 1 << std::endl;
		}
		else if (menu == 4) {
			std::cout << "La mayor nota es un " << max << " del alumno " << maxPos + 1 << std::endl;
		}

		std::cout << "\nIntroduzca una opcion (0 para salir): ";
		std::cin >> menu;
	}
	return 0;
}