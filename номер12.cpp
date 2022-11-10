#include <iostream>
#include <math.h>

using namespace std;

//Дать рекомендации пользователю с известным ростом и весом похудеть или поправиться, если
//идеальный вес определяется формулой (рост - 100 = идеальный вес).
void weight(){
    int w,h;
    cout << "Enter your weight: ";
    cin >> w;
    cout << "\nEnter your height: ";
    cin >> h;
    if (w<(h-100))
    cout << "You need to gain weight ";
    else
    {
    cout << "You need to lose weight ";
}
}
int main()
{
    weight(); //вызов функции задания 12
    return 0;
}