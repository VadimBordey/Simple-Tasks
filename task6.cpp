#include <iostream>
#include <iomanip>

int main()
{

	float P, R;
	int T;
	std::cout << "Введіть суму позики P: ";
	std::cin >> P;
	std::cout << "Введіть період позики T: ";
	std::cin >> T;
	std::cout << "Введіть процентну ставку R: ";
	std::cin >> R;
	float I = (P * T * R) / 100;
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Прості відсотки (float): " << I << std::endl;
	std::cout << "Прості відсотки (int): " << static_cast<int>(I) << std::endl;
	return 0;
} 
