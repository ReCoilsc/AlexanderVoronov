#include <iostream>
#include <math.h>

using namespace std;

//задание 5-обьявление функции выполнения перехода от декартовых координат к полярным
void trans(){
    float x,y,phi,r;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    r=sqrt(pow(x,2)+pow(y,2));
    phi = atan(y / x);
    cout << "Radius in polar system is: " << r << endl;
    cout << "Аngle in polar system is: " << phi << endl; //угол возвращается в радианах
}

int main()
{
    trans(); //вызов функции задания 5
    return 0;
}

