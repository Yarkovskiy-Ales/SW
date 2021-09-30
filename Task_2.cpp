#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int day;

    cout << "Введите номер дня недели: ";
    cin >> day;
    cout << "\n";

    switch (day)
    {
    case 1:
        cout << "Понедельник\n";
        break;
    case 2:
        cout << "Вторник\n";
        break;
    case 3:
        cout << "Среда\n";
        break;
    case 4:
        cout << "Четверг\n";
        break;
    case 5:
        cout << "Пятница\n";
        break;
    case 6:
        cout << "Суббота\n";
        break;
    case 7:
        cout << "Воскресенье\n";
        break;
    default:
        cout << "Ошибка!\n";
        break;
    }

    return 0;
}