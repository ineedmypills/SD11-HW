#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

bool isLeapYear(int year);
int daysInMonth(int month, int year);
int dateDifference(int day1, int month1, int year1, int day2, int month2, int year2);
double calculateAverage(int arr[], int size);
void countElements(int arr[], int size, int& positiveCount, int& negativeCount, int& zeroCount);

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    std::cout << "Задача 1" << std::endl;
    int d1 = 1, m1 = 1, y1 = 2024;
    int d2 = 5, m2 = 11, y2 = 2024;

    int difference = dateDifference(d1, m1, y1, d2, m2, y2);
    std::cout << "Разность в днях: " << difference << " дней" << std::endl;

    std::cout << std::endl;

    std::cout << "Задача 2" << std::endl;
    int arr[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(arr) / sizeof(arr[0]);

    double average = calculateAverage(arr, size);
    std::cout << "Среднее арифметическое: " << average << std::endl;

    std::cout << std::endl;

    std::cout << "Задача 3" << std::endl;
    int arr2[] = { 10, -5, 0, 3, -2, 0, 7 };
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int positiveCount, negativeCount, zeroCount;

    countElements(arr2, size2, positiveCount, negativeCount, zeroCount);

    std::cout << "Положительные элементы: " << positiveCount << std::endl;
    std::cout << "Отрицательные элементы: " << negativeCount << std::endl;
    std::cout << "Нулевые элементы: " << zeroCount << std::endl;

    return 0;
}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year) {
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return isLeapYear(year) ? 29 : 28;
    default:
        return 0;
    }
}

int dateDifference(int day1, int month1, int year1, int day2, int month2, int year2) {
    int totalDays1 = 0, totalDays2 = 0;

    for (int year = 0; year < year1; year++) {
        totalDays1 += isLeapYear(year) ? 366 : 365;
    }
    for (int month = 1; month < month1; month++) {
        totalDays1 += daysInMonth(month, year1);
    }
    totalDays1 += day1;

    for (int year = 0; year < year2; year++) {
        totalDays2 += isLeapYear(year) ? 366 : 365;
    }
    for (int month = 1; month < month2; month++) {
        totalDays2 += daysInMonth(month, year2);
    }
    totalDays2 += day2;

    return std::abs(totalDays1 - totalDays2);
}

double calculateAverage(int arr[], int size) {
    if (size == 0) {
        return 0;
    }

    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

void countElements(int arr[], int size, int& positiveCount, int& negativeCount, int& zeroCount) {
    positiveCount = 0;
    negativeCount = 0;
    zeroCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        }
        else if (arr[i] < 0) {
            negativeCount++;
        }
        else {
            zeroCount++;
        }
    }
}
