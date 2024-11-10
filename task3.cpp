#include <iostream>

int main()
{
	int a, b;

	std::cout << "Введіть число a: ";
	std::cin >> a;
	std::cout << "Введіть число b: ";
	std::cin >> b;
	std::cout << "Сума: " << (a + b) << std::endl;
	std::cout << "Різниця: " << (a - b) << std::endl;
	std::cout << "Добуток: " << (a * b) << std::endl;
	return 0;
}
