#include <iostream>

int main()
{
	float gradePhysics;
	float gradeGeo;
	float gradePE;

	std::cout << "Introduzca la nota de fisica: ";
	std::cin >> gradePhysics;

	std::cout << "Introduzca la nota de geografia: ";
	std::cin >> gradeGeo;

	std::cout << "Introduzca la nota de educacion fisica: ";
	std::cin >> gradePE;

	std::cout << "\nLa nota media entre las tres asignaturas es de: " << (gradePhysics + gradeGeo + gradePE) / 3;
	return 0;
}