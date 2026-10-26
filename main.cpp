#include <iostream>
#include <Windows.h>
#include <random>
using namespace std;
int main()
{ SetConsoleCP(1251);
SetConsoleOutputCP(1251);
srand(time(NULL));
int RandomNumber;
cout << "гра вгадай число" << endl;
RandomNumber = rand() % 20;
cout << "Введіть число від 0 до 19: ";
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
// ===== Студент 3: коло =====

// ===== Студент 4: головне меню =====
int main() {
    return 0;
}
