#include <iostream>
#include <string>

void apartadoA();
void apartadoB();

int main()
{
    apartadoA();
    std::cout << "\n\n\n" << std::endl;
    apartadoB();
    return 0;
}

void apartadoA()
{
    std::string name;
    std::string firstSur;
    std::string secondSur;

    std::cout << "Indica el tu nombre: ";
    std::cin >> name;
    std::cout << "Indica tu primer apellido: ";
    std::cin >> firstSur;
    std::cout << "Indica tu segundo apellido: ";
    std::cin >> secondSur;

    std::cout << "Bienvenid@ a Tobalcaide " << name << " " << firstSur << " " << secondSur
        << ", este curso aprenderas a programar en C++." << std::endl;
}

void apartadoB()
{
    std::string name;
    std::string surnames;

    std::cout << "Indica el tu nombre: ";
    std::cin >> name;
    std::cout << "Indica tus apellidos: ";
    std::cin.ignore();
    std::getline(std::cin, surnames);

    std::cout << "Bienvenid@ a Tobalcaide " << name << " " << surnames
        << ", este curso aprenderas a programar en C++." << std::endl;

}