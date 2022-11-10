#include <iostream>
#include <math.h>

using namespace std;

//задание 7-обьявление функции нахождения корней квадратного уравнения.
    void uravnenie(){
    float a,b,c,dis,x1,x2;
    cout << "Enter a: "<< endl;
    cin >> a;
    cout << "Enter b: "<< endl;
    cin >> b;
    cout << "Enter c: "<< endl;
    cin >> c;
    dis=pow(b,2)-4*a*c;
    if (dis<0)
        cout << "Net resheniy"<< endl;
    else if (dis==0){
        x1=-(b/(2*a));
        cout << "x= " << x1 << endl;
    }
    else 
    {
    x1=((-b)+sqrt(dis))/(2*a);
    x2=((-b)-sqrt(dis))/(2*a);
    cout << "x1= " << x1 << endl;
    cout << "x2= " << x2 << endl;
    }
    
};

int main()
{
    uravnenie(); //вызов функции задания 7
    return 0;
}