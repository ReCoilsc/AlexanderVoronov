#include <iostream>
#include <math.h>

using namespace std;

//ЗАДАНИЕ 14-Написать программу вычисления стоимости переговоров, если по субботам и воскресеньям
//предоставляется скидка 20%. Ввести продолжительность разговора и день недели(число от 1 до 7)

// в условие не указана цена минуты, так что приму ее за 11р-минута разговора
void price(){
    const float pr=11.0;
    float length;
    int day;
    cout << "Enter your length of talk in minutes: ";
    cin >> length;
    cout << "\nEnter day of the week(from 1 to 7): ";
    cin >> day;
        if(day==6 or day==7)
    cout << "Your price is: " << (pr*length)/100*80;
        else
    cout << "Your price is: " << (pr*length);
}
int main()
{
    price(); //вызов функции задания 14
    return 0;
}

