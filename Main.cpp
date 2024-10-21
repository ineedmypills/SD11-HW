#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>


int main()
{
	srand(static_cast<unsigned int>(time(0)));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int array[3]{};
	int user_num{};
	std::cout << "Число: ";
	std::cin >> user_num;
	std::cout << std::endl;

	std::cout << "Задача 1: " << std::endl;
	array[0] = user_num;
	array[1] = array[0] * 2;
	array[2] = array[1] * 2;

	std::cout << "Массив: " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << array[i] << " ";
	}

	std::cout << std::endl << std::endl;

	std::cout << "Задача 2: " << std::endl;
	array[0] = user_num;
	array[1] = array[0] + 1;
	array[2] = array[1] + 1;

	std::cout << "Массив: " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << array[i] << " ";
	}

	std::cout << std::endl << std::endl << "А в чём подвох/сложность?..";



	return 0;
}

