#include <iostream>
#include <math.h>

using namespace std;

//задание 4-обьявление функции нахождения суммы цифр числа
void summa(){
    int a;
    cout << "Enter number:";
    cin >> a;
    int sum=(a%10)+(a/1000)+((a/100)%10)+((a%100)/10);
    cout << "Summa is: " << sum;
}

int main()
{
    summa(); //вызов функции задания 4
    return 0;
}

