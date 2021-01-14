#include <iostream>
#include <array>
#include <numeric>
#include <algorithm>

unsigned short menu();
void inputGrad(std::array<std::array<float, 15>, 4>&, const unsigned short&);
void inputGrad(std::array<std::array<float, 15>, 4>&);
float averageSubject(const std::array<std::array<float, 15>, 4>&, const unsigned short&);
void sortSubjects(std::array<std::array<float, 15>, 4>&, const unsigned short&);
std::array<unsigned short, 5> stats(const std::array<std::array<float, 15>, 4>&);

int main() {
	std::array<std::array<float, 15>, 4> grades{};
	unsigned short tmpInput;
	unsigned short tmpSub;

	do {
		tmpInput = menu();

		switch (tmpInput) {
		case 1:
			do {
				std::cout << "Introduzca la asignatura (1 - 4): ";
				std::cin >> tmpSub;
			} while (tmpSub < 1 || tmpSub > 4);
			inputGrad(grades, tmpSub - 1);
			break;

		case 2:
			inputGrad(grades);
			break;

		case 3:
			do {
				std::cout << "Introduzca la asignatura (1 - 4): ";
				std::cin >> tmpSub;
			} while (tmpSub < 1 || tmpSub > 4);
			std::cout << "La media de la asignatura " << tmpSub << " es: " << averageSubject(grades, tmpSub - 1);
			break;

		case 4:
			do {
				std::cout << "Introduzca la asignatura (1 - 4): ";
				std::cin >> tmpSub;
			} while (tmpSub < 1 || tmpSub > 4);
			sortSubjects(grades, tmpSub - 1);			
			break;

		case 5:
			std::array<unsigned short, 5> result = stats(grades);
			std::cout << "Las notas entre 0 y 3 son: " << result[0] << std::endl;
			std::cout << "Las notas entre 3 y 5 son: " << result[1] << std::endl;
			std::cout << "Las notas entre 5 y 7 son: " << result[2] << std::endl;
			std::cout << "Las notas entre 7 y 9 son: " << result[3] << std::endl;
			std::cout << "Las notas entre 9 y 10 son: " << result[4] << std::endl;
			break;
		default:
			break;
		}
		std::cout << std::endl;
	} while (tmpInput != 6);

	return 0;
}

unsigned short menu() {
	unsigned short input{ 0 };

	std::cout << "1 - Insertar las notas de la asignatura seleccionada" << std::endl;
	std::cout << "2 - Insertar todas las notas" << std::endl;
	std::cout << "3 - Calcular la nota media de la asginatura seleccionada" << std::endl;
	std::cout << "4 - Ordenar las notas de forma ascendente de una asignatura" << std::endl;
	std::cout << "5 - Estadisticas" << std::endl;
	std::cout << "6 - Salir" << std::endl;

	do {
		std::cout << "Elija una opcion: ";
		std::cin >> input;
	} while (input < 1 || input > 6);

	return input;
}

void inputGrad(std::array<std::array<float, 15>, 4>& arr, const unsigned short& selectedGrade) {
	float tmpGrade;

	for (size_t i = 0; i < arr[selectedGrade].size(); i++) {
		std::cout << "Introduzca la nota del alumno " << i + 1 << ": ";
		std::cin >> tmpGrade;

		while (tmpGrade < 0 || tmpGrade > 10) {
			std::cout << "Error. La nota tiene que estar entre 0 y 10. Vuelva a introducir la nota: ";
			std::cin >> tmpGrade;
		}
		arr[selectedGrade][i] = tmpGrade;
	}
}

void inputGrad(std::array<std::array<float, 15>, 4>& arr) {
	float tmpGrade{ -1 };

	for (size_t i = 0; i < arr.size(); i++) {
		for (size_t j = 0; j < arr[0].size(); j++) {
			std::cout << "Introduzca la nota de la asignatura " << i + 1 << ", del alumno " << j + 1 << ": ";
			std::cin >> tmpGrade;

			while (tmpGrade < 0 || tmpGrade > 10) {
				std::cout << "Error. La nota tiene que estar entre 0 y 10. Vuelva a introducir la nota: ";
				std::cin >> tmpGrade;
			}
			arr[i][j] = tmpGrade;
		}
	}
}

float averageSubject(const std::array<std::array<float, 15>, 4>& arr, const unsigned short& selectedSub) {
	return (std::accumulate(std::begin(arr[selectedSub]), std::end(arr[selectedSub]), 0.0) / arr[selectedSub].size());
}

void sortSubjects(std::array<std::array<float, 15>, 4>& arr, const unsigned short& selectedSub) {
	std::sort(std::begin(arr[selectedSub]), std::end(arr[selectedSub]));
}

std::array<unsigned short, 5> stats(const std::array<std::array<float, 15>, 4>& arr) {
	std::array<unsigned short, 5> res{};

	for (const auto& subject : arr) {
		res[0] += std::count_if(std::begin(subject), std::end(subject), [](const auto& x) {return x <= 3; });
		res[1] += std::count_if(std::begin(subject), std::end(subject), [](const auto& x) {return (x > 3 && x < 5); });
		res[2] += std::count_if(std::begin(subject), std::end(subject), [](const auto& x) {return x >= 5  && x < 7; });
		res[3] += std::count_if(std::begin(subject), std::end(subject), [](const auto& x) {return x >= 7 && x < 9; });
		res[4] += std::count_if(std::begin(subject), std::end(subject), [](const auto& x) {return x >= 9; });
	}

	return res;
}