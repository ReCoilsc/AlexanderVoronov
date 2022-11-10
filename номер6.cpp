#include <iostream>
#include <math.h>

using namespace std;

//задание 6-обьявление функции выполнения перехода от полярных к декартовым координатам
void transport(){
    float x,y,phi,r;
    cout << "Enter radius: ";
    cin >> r;
    cout << "Enter аngle : ";
    cin >> phi;
//для функций sin и cos угол передаем в радианах
    x = r*cos(phi*M_PI/180.0);
    y = r*sin(phi*M_PI/180.0);
    cout << "X is: " << x << endl;
    cout << "Y is: " << y << endl;
}

int main()
{
    transport(); //вызов функции задания 6
    return 0;
}
