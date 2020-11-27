#include <iostream>

int main()
{
    int num;

    std::cout << "Dime un numero: ";
    std::cin >> num;

    std::cout << "La tabla del " << num << std::endl;

    for (int i{ 1 }; i < 11; i++)
    {
        std::cout << num << " * " << i << " = " << num * i << std::endl;
    }
    return 0;
}
