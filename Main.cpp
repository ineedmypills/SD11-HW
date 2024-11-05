#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>


int main()
{
	srand(static_cast<unsigned int>(time(0)));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    std::cout << "Задача 1: " << std::endl;


    const int rows = 3;
    const int cols = 3;

    int array[rows][cols]{};

    int start_number;
    std::cout << "Введите число: ";
    std::cin >> start_number;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            array[i][j] = start_number * (1 << j);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Задача 2: " << std::endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = start_number + (i * cols + j);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }


	return 0;
}

