// ExamplePaysheetExercise.cpp
// Program to test Paysheet class

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Nomina.h"


int main()
{
	std::string name;
	std::string surname;
	float kilometers;

	cout << "Introduzca su nombre y pulse enter: ";
	std::getline(cin, name);
	cout << "Introduzca sus apellidos y pulse enter: ";
	std::getline(cin, surname);
	cout << "Para finalizar introduzca la distancia en kilometros entre su casa y trabajo y pulse enter: ";
	cin >> kilometers;

	Paysheet testPaysheet(name, surname, kilometers);

	testPaysheet.printPaysheet();
}