#include <iostream>
#include <Windows.h>
#include <ctime>

int Random(int min, int max) {
	return min + rand() % (max - min + 1);
}

int main()
{
	srand(time(0));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Задача 1.\n\n";

	const int size = 10;
	int rand_arr[size]{};




	for (int i = 0; i < size; i++)
	{
		rand_arr[i] = Random(0,100);
	}

	int min = rand_arr[0];
	int max = rand_arr[0];

	for (int i = 0; i < size; i++)
	{
		if (rand_arr[i] > max)
		{
			max = rand_arr[i];
		}
		if (rand_arr[i] < min)
		{
			min = rand_arr[i];
		}
	}

	std::cout << "Массив: ";

	for (int i = 0; i < size; i++)
	{
		std::cout << rand_arr[i] << " ";
	}

	std::cout << "\nМинимальное число: " << min << "\nМаксимальное число: " << max << std::endl;



	std::cout << "\nЗадача 2.\n\n";

	int min_r{}, max_r{}, num{}, sum{}, arr[size]{};

	std::cout << "Минимальное случайное число: ";
	std::cin >> min_r;
	do {
	std::cout << "Максимальное случайное число: ";
	std::cin >> max_r;
	} while (max_r < min_r);

	for (int i = 0; i < size; i++)
	{
		arr[i] = Random(min_r, max_r);
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << "\n\nВаше число: ";
	std::cin >> num;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < num){
			sum += arr[i];
		}
	}

	std::cout << "Сумма чисел, меньше чем " << num << ": " << sum;



	std::cout << "\n\nЗадача 3.\n\n"; 

	const int months{ 12 };
	int months_profit[months]{};

	for (int i = 0; i < months; i++)
	{
			std::cout << "Прибыль за " << i + 1 << " месяц: ";
			std::cin >> months_profit[i];
	}
	
	int month_from{}, month_to{};
	
	std::cout << "\nДиапазон" << std::endl;
	do{
	std::cout << "С: "; 
	std::cin >> month_from;
	} while (month_from < 1 || month_from > 12);
	
	do {
		std::cout << "По: ";
		std::cin >> month_to;
	} while (month_to < month_from || month_to > 12);

	for (int i = month_from; i < month_to+1; i++)
	{
		std::cout << "\nПрибыль за " << i << " месяц: " << months_profit[i-1];
	}

	int min_profit = months_profit[month_from];
	int max_profit = months_profit[month_to];

	for (int i = month_from; i < month_to; i++)
	{
		if (months_profit[i] > max_profit)
		{
			max_profit = months_profit[i];
		}
		if (months_profit[i] < min_profit)
		{
			min_profit = months_profit[i];
		}
	}

	std::cout << "\n\nМинимальная прибыль: " << min_profit << "\nМаксимальная прибыль: " << max_profit << std::endl;



	return 0;
}