#include <iostream>
#include <math.h>

using namespace std;

//задание 3-обьявление функции нахождения площади треугольника и гипотенузы 
void ploshad_gipotenusa(){
    float a,b;
    cout << "Enter katet 1:";
    cin >> a;
    cout << "Enter katet 2:";
    cin >> b;
    float ploshad=0.5*a*b;
    
    float gip=pow(a,2)+pow(b,2);
    cout << "Square is: " << ploshad << endl;
    cout << "Gipotenusa is: " << gip;
}

int main()
{
    ploshad_gipotenusa(); //вызов функции задания 3
    return 0;
}

