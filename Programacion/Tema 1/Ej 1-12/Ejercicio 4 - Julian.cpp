#include <iostream>

int main()
{
	int a{ 5 };
	int b{ 12 };
	int c{ a + b };

	std::cout << "La suma de a + b es:\n\n" << c << std::endl;
	return 0;
}