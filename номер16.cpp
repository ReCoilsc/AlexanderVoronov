#include <iostream>
#include <math.h>

using namespace std;

// ЗАДАНИЕ 16- Определить, является ли шестизначное число "счастливым"

void lucky(){
    int number,a,b;
    cout << "Enter your number: ";
    cin >> number;
    a=(number%10+((number/10)%10)+((number/100)%10));
    b=(((number/1000)%10)+(number/10000)%10+(number/100000));
    if (a==b)
    cout << "It's lucky number!";
    else
    cout << "It's not lucky number!(";
}
int main()
{
    lucky(); //вызов функции задания 16
    return 0;
}