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
int UserNumber;
do
{
    cin >> UserNumber;
if (UserNumber < RandomNumber)
    cout << "Загадане число більше!" << endl;
else if (UserNumber > RandomNumber)
    cout << "Загадане число менше!" << endl;
else
    cout << "Ви вгадали число! Це було число " << RandomNumber << endl;     
} 
while (UserNumber != RandomNumber);
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
