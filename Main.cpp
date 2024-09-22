#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double distance;
    double time;

    std::cout << "\nЗадача 1.\n";
    std::cout << "Расстояние до аэропорта (в км): ";
    std::cin >> distance;
    std::cout << "Время (в часах): ";
    std::cin >> time;
    std::cout << "\nСкорость: " << distance/time << "км/ч";


    int hours;
    int minutes;
    int seconds;

    std::cout << "\n\nЗадача 2.\n";
    std::cout << "Часы: ";
    std::cin >> hours;
    std::cout << "Минуты: ";
    std::cin >> minutes;
    std::cout << "Секунды: ";
    std::cin >> seconds;
    std::cout << "\nСтоимость (в гривнах (why?..)): " << (hours * 3600 + minutes * 60 + seconds) / 60 * 2;

    double carDistance;
    double gasFlow;
    double gas1;
    double gas2;
    double gas3;

    std::cout << "\n\nЗадача 3.\n";
    std::cout << "Дистанция: ";
    std::cin >> carDistance;
    std::cout << "Расход бензина (в литрах на 100км): ";
    std::cin >> gasFlow;
    std::cout << "Стоимость первого вида бензина (на 1л): ";
    std::cin >> gas1;
    std::cout << "Стоимость второго вида бензина (на 1л): ";
    std::cin >> gas2;
    std::cout << "Стоимость третьего вида бензина (на 1л): ";
    std::cin >> gas3;
    std::cout << "\nСтоимость поездки на первом виде бензина: " << (carDistance / 100 * gasFlow) * gas1 << "\n";
    std::cout << "Стоимость поездки на втором виде бензина: " << (carDistance / 100 * gasFlow) * gas2 << "\n";
    std::cout << "Стоимость поездки на третьем виде бензина: " << (carDistance / 100 * gasFlow) * gas3 << "\n";

    return 0;
}