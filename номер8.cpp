#include <iostream>
#include <math.h>

using namespace std;

//задание 8-обьявление функции нахождения медиан треугольника
void medians(){
    float a,b,c,newa,newb,newc;
    cout << "Enter a: "<< endl;
    cin >> a;
    cout << "Enter b: "<< endl;
    cin >> b;
    cout << "Enter c: "<< endl;
    cin >> c;
    
    newa=0.5*(sqrt(2*b*b+2*c*c-a*a));
    newb=0.5*(sqrt(2*a*a+2*c*c-b*b));
    newc=0.5*(sqrt(2*b*b+2*a*a-c*c));
    cout << "Side a= " << newa << endl;
    cout << "Side b= " << newb <<endl;
    cout << "Side c= " << newc <<endl;
}
    
int main()
{
    medians(); //вызов функции задания 8
    return 0;
}