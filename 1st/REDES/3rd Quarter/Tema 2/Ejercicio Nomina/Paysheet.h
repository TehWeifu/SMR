#pragma once

// Paysheet.h
// Definition of paysheet class that include member variables and member functions

#include <string>

class Paysheet
{
public:

	//Constructor that initializar member variables "_name", "_surname" and "_kmWorkTohome"
	Paysheet(std::string, std::string, float);

	// Set / Get functions for member variables
	void setName(const std::string&);
	std::string const getName();

	void setSurname(const std::string&);
	std::string const getSurname();

	void setPlusMovement(const float&);
	float const getPlusMovement();

	float const getBaseSalary();
	float const getCC();
	float const getUnemployment();
	float const getEducation();

	float const getTotalContributions();
	float const getTotalIRPF();
	float const getNetTotal();

	// Function that prints the resume of the paycheck
	void printPaysheet();



private:
	// Not a huge fan of this but for now it will say like that
	const float baseSalary = 956.28; // in this case the base salary will stay as cosnt since it won't change.
	const float percentCC = 4.7;
	const float percentUnemployment = 1.55;
	const float percentEducation = 0.10;
	const float percentIRPF = 11; // const for the same reason as the base salary

	// data members of the class
	std::string _name;
	std::string _surname;
	float _plusMovement;
};