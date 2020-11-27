// Nomina.cpp
// implementation of member funcion of class Paysheet

#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setprecision;

#include "Nomina.h"

// The constructor simply initializes the data member of the class through member functions "Set"
Paysheet::Paysheet(std::string name, std::string surname, float kms)
{
	setName(name);
	setSurname(surname);
	setPlusMovement(kms);		
}

// Definition of the rest of member functions
void Paysheet::setName(const std::string& name)
{
	_name = name;
}

std::string const Paysheet::getName()
{
	return _name;
}


void Paysheet::setSurname(const std::string& surname)
{
	_surname = surname;
}

std::string const Paysheet::getSurname()
{
	return _surname;
}


void Paysheet::setPlusMovement(const float& kms)
{
	_plusMovement = kms * 0.85;
}

float const Paysheet::getPlusMovement()
{
	return _plusMovement;
}


float const Paysheet::getBaseSalary()
{
	return baseSalary;
}

float const Paysheet::getCC()
{
	return( (getBaseSalary() + getPlusMovement()) * percentCC / 100.0);
}

float const Paysheet::getUnemployment()
{
	return((getBaseSalary() + getPlusMovement()) * percentUnemployment / 100.0);
}

float const Paysheet::getEducation()
{
	return((getBaseSalary() + getPlusMovement()) * percentEducation / 100.0);
}

float const Paysheet::getTotalContributions()
{
	return( getCC() + getUnemployment() + getEducation() );
}

float const Paysheet::getTotalIRPF()
{
	return( ((getBaseSalary() + getPlusMovement()) * percentIRPF) / 100.0 );
}

float const Paysheet::getNetTotal()
{
	return( (getBaseSalary() + getPlusMovement()) - (getTotalContributions() + getTotalIRPF()) );
}


// definition of the funtion that prints the resume of the paysheet
void Paysheet::printPaysheet()
{
	cout << std::fixed << setprecision(2);
	cout << "\nINFORME DE NOMINA" << endl << "Nombre: " << getName() << endl << "Apellidos: " << getSurname() << endl << endl;
	cout << "  -> Salario base: " << getBaseSalary() <<"$" << endl << "  -> Plus transporte: " << getPlusMovement() << "$" << endl << endl;
	cout << "  <- Contingencias comunes: " << getCC() << "$" << endl << "  <- Desempleo: " << getUnemployment() << "$" << endl;
	cout << "  <- Formacion: " << getEducation() << "$" << endl << endl;
	cout << "  <- Total aportaciones: " << getTotalContributions() << "$" << endl;
	cout << "  <- Total IRPF: " << getTotalIRPF() << "$" << endl;
	cout << " --------------------------------------------" << endl;
	cout << " SALARIO TOTAL NETO A PERCIBIR: " << getNetTotal() << "$" << endl;
}