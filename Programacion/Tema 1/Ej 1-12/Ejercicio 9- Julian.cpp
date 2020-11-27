#include <iostream>

int main()
{
    double num1;
    double num2;

    std::cout << "Indica el primer numero: ";
    std::cin >> num1;

    std::cout << "\nIndica el segundo numero: ";
    std::cin >> num2;

    std::cout << "\nLa suma es: " << num1 + num2 << std::endl;
    std::cout << "La resta es: " << num1 - num2 << std::endl;
    std::cout << "La multiplicacion es: " << num1 * num2 << std::endl;
    std::cout << "La division es: " << num1 / num2 << std::endl;
    return 0;
}
