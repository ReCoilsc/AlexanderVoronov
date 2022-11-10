#include <iostream>
#include <math.h>
#include <cstdlib>
#include<ctime>

using namespace std;

//Программа генерирует два случайных числа в диапазоне от 1 до 9. Тестируемый вводит результат
//произведения этих чисел. Программа сообщает тестируемому ошибся он или нет.

//Использовал немного другую генерацию, в любом случае числа псевдорандомные

void ran(){
    int a,b,c;
    srand(time(NULL));
    for(int i=0;i<10;i++) {
// Генерируется случайное число от 0 до 9.
    a=rand()%10;
    b=rand()%10;
    cout<<"First number is: " << a << endl;
    cout<<"Second number is: " << b << endl;
    break;
  }
cout << "Enter your product: " << endl;
cin >> c;
if (c==a*b)
    cout<<"CORRECT " << endl;
else
    cout<<"WRONG" << endl;
}

int main()
{
    ran(); //вызов функции задания 13
    return 0;
}