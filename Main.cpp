#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double rubles{};
	double dollar{ 92.78 };
	double euro{ 103.44 };
	double yuan{ 13.23 };
	double farit{ 37 };
	double yen{ 0.65 };
	double tenge{ 0.19 };
	int currency_type{};

	while (true) {
		std::cout << "\n\n 1. Доллар \n 2. Евро \n 3. Юань \n 4. Фарит \n 5. Йен \n 6. Тенге \n 7. Выйти из обменника \nЧто делаем?: ";
		std::cin >> currency_type;

		if (currency_type == 7)
		{
			break;
		}

		std::cout << "\nКоличество рублей: ";
		std::cin >> rubles;


		if (currency_type == 1)
		{
			std::cout << "\nВы получите " << (rubles / dollar) * 0.95 << " долларов (с учётом комиссии " << rubles * 0.05 << " рублей (5%))";
		}
		else if (currency_type == 2)
		{
			std::cout << "\nВы получите " << (rubles / euro) * 0.95 << " евро (с учётом комиссии " << rubles * 0.05 << " рублей (5%))";
		}
		else if (currency_type == 3)
		{
			std::cout << "\nВы получите " << (rubles / yuan) * 0.95 << " Юаней (с учётом комиссии " << rubles * 0.05 << " рублей (5%))";
		}
		else if (currency_type == 4)
		{
			std::cout << "\nВы получите " << (rubles / farit) * 0.95 << " фаритов (с учётом комиссии " << rubles * 0.05 << " рублей (5%))";
		}
		else if (currency_type == 5)
		{
			std::cout << "\nВы получите " << (rubles / yen) * 0.95 << " йен (с учётом комиссии " << rubles * 0.05 << " рублей (5%))";
		}
		else if (currency_type == 6)
		{
			std::cout << "\nВы получите " << (rubles / tenge) * 0.95 << " тенге (с учётом комиссии " << rubles * 0.05 << " рублей (5%))";
		}
		else
		{
			std::cout << "\nНеверный ввод...";
		}
	}



	return 0;
}