#include <iostream>
#include <math.h>

using namespace std;

//задание 10-Определить, является ли треугольник со сторонами a, b, c равнобедренным.
//по условию сказано,что подаются стороны треугольника-значит проверять на его существование не надо
void treug(){
    int a,b,c;
    cout << "Enter a: "<< endl;
    cin >> a;
    cout << "Enter b: "<< endl;
    cin >> b;
    cout << "Enter c: "<< endl;
    cin >> c;
    
    if ((a==c or a==b) or (c==b))
    cout << "Triangle is isosceles " << endl;
    else
    {
    cout << "Triangle is not isosceles ";
}
}
int main()
{
    treug(); //вызов функции задания 10
    return 0;
}