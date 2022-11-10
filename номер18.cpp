#include <iostream>
#include <math.h>

using namespace std;

// ЗАДАНИЕ 18-Дано натуральное четырехзначное число. Выяснить, является ли оно палиндромом

void polyndrom(){
    int number,a,b;
    cout << "Enter your number: ";
    cin >> number;
    if ((number/1000 == number%10) and ((number/100)%10 == ((number/10)%10)))
    cout << "It's polyndrom!";
    else
    cout << "It's not polyndrom!(";
}
int main()
{
    polyndrom(); //вызов функции задания 18
    return 0;
}