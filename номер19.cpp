#include <iostream>
#include <math.h>

using namespace std;

// ЗАДАНИЕ 19-Дано трёхзначное число. Определить: 19.1 является ли произведение его цифр больше числа b 19.2 кратна ли 7 сумма его цифр

void product(){
    int number,b,sum;
    cout << "Enter your number: ";
    cin >> number;
    cout << "\nEnter number b: ";
    cin >> b;
    
    
    if ((number%10*((number/10)%10)*(number/100) > b) and ((number%10+((number/10)%10)+(number/100))%7==0))
    cout << "Произведение цифр больше числа b и сумма цифр кратна 7";
    
    else if ((number%10*((number/10)%10)*(number/100) < b) and ((number%10+((number/10)%10)+(number/100))%7!=0))
    cout << "Произведение цифр меньше числа b и сумма цифр не кратна 7!";
    
    else if ((number%10*((number/10)%10)*(number/100) > b) and ((number%10+((number/10)%10)+(number/100))%7!=0))
    cout << "Произведение цифр больше числа b и сумма цифр не кратна 7";
    
    else if ((number%10*((number/10)%10)*(number/100) < b) and ((number%10+((number/10)%10)+(number/100))%7==0))
    cout << "Произведение цифр меньше числа b и сумма цифр кратна 7";
}

int main()
{
    product(); //вызов функции задания 18
    return 0;
}