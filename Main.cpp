#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "\nЗадача 1\n";
    int num;
    cout << "Введите шестизначное число: ";
    cin >> num;
    if (num > 99999 && num < 1000000) 
    {
        if (num / 100000 + num / 10000 % 10 + num / 1000 % 10 == num / 100 % 10 + num / 10 % 10 + num % 10)
            cout << "\nСчастливое!\n";
        else 
            cout << "\nНе счастливое...\n";
    }
    else 
    {
        cout << "\nЧисло не шестизначное!\n";
    }

    cout << "\nЗадача 2\n";
    char a, b, c, d;
    cout << "Введите четырехзначное число: ";
    cin >> a >> b >> c >> d; //ввод можно юзать несколько раз, как и вывод, жесть 0.0
    cout << b << a << d << c << "\n";

    cout << "\nЗадача 3\n";
    cout << "Я хз 0.0\n";

    return 0;
}