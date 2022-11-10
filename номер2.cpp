
#include <iostream>
#include <math.h>

using namespace std;

//задание 2-обьявление функции нахождения длины окружности и площади круга 
void dlina_ploshad(){
    float r;
    cout << "Enter radius:";
    cin >> r;
    float dlina=2.0*M_PI*r;
    float ploshad=2.0*M_PI*pow(r,2);
    cout << "Length is: " << dlina << endl;
    cout << "Square is: " << ploshad;
}

int main()
{
    dlina_ploshad(); //вызов функции задания 2
    return 0;
}

