#include <iostream>
#include <math.h>

using namespace std;

// ЗАДАНИЕ 15-Ввести с клавиатуры номер месяца. Выдать сообщение о названии месяца и времени года.

void month(){
    int month;
    cout << "Enter month: ";
    cin >> month;
    switch (month){
    case 1:
    cout << "It's January and winter!";
    break;
    case 2:
    cout << "It's February and winter!";
    break;
    case 3:
    cout << "It's Marсh and spring!";
    break;
    case 4:
    cout << "It's April and spring!";
    break;
    case 5:
    cout << "It's May and spring!";
    break;
    case 6:
    cout << "It's June and summer!";
    break;
    case 7:
    cout << "It's July and summer!";
    break;
    case 8:
    cout << "It's August and summer!";
    break;
    case 9:
    cout << "It's September and autumn!";
    break;
    case 10:
    cout << "It's October and autumn!";
    break;
    case 11:
    cout << "It's November and autumn!";
    break;
    case 12:
    cout << "It's December and winter!";
    break;
    default:
    cout << "ERROR";
    break;
    }
}
int main()
{
    month(); //вызов функции задания 15
    return 0;
}