#include <iostream>
#include <math.h>

using namespace std;

// ЗАДАНИЕ 17-Написать программу, которая при вводе числа в диапазоне от 1 до 99 добавляет к нему слово "копейка" в правильной форме

void scl(){
    int number;
    cout << "Enter your number: ";
    cin >> number;
    if (number==1 or number==21 or number==31 or number==41 or number==51 or number==61 or number==71 or number==81 or number==91)
    cout << number << " копейка";
    else if ((1<number and number<5) or (21<number and number<25) or (31<number and number<35) or (41<number and number<45) or (51<number and number<55) or (61<number and number<65) or (71<number and number<75) or (81<number and number<85) or (91<number and number<95))
    cout << number << " копейки";
    else
    cout << number << " копеек";
}

int main()
{
    scl(); //вызов функции задания 17
    return 0;
}
