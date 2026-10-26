#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int Choice;
    cout << "Калькулятор одиниць" << endl;
    cout << "1. Конвертація валют" << endl;
    cout << "2. Метри у фути" << endl;
    cout << "3. Цельсій у Фаренгейт" << endl;
    cout << "Виберіть дію: ";
    cin >> Choice;

    double Currency;
    double Meters;
    double Celsius;
    double Rate;


    if (Choice == 1)
    {
        cout << "Введіть суму валюти: ";
        cin >> Currency;
        cout << "Введіть курс валюти: ";
        cin >> Rate;
        cout << "Результат конвертації валюти: " << Currency * Rate << endl;
    }
 else if (Choice == 2)
    {
        cout << "Введіть метри: ";
        cin >> Meters;
        cout << "Результат: " << Meters << " метрів = " << Meters * 3.28084 << " футів" << endl;
    }
 else if (Choice == 3)
    {
        cout << "Введіть градуси Цельсія: ";
        cin >> Celsius;
        cout << "Результат: " << Celsius << " градусів Цельсія = " << Celsius * 9 / 5 + 32 << " градусів Фаренгейта" << endl;
    }
    else
        cout << "Неправильний вибір!" << endl;
    return 0;
}
