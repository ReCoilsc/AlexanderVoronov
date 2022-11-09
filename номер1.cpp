#include <iostream>

using namespace std;

//задание 1-обьявление функции нахождения площади трапеции
void square_trapecia(){
    float b1, b2, h;
    cout << "Enter base b1:";
    cin >> b1;
    cout << "Enter base b2:";
    cin >> b2;
    cout << "Enter base h:";
    cin >> h;
float square=(b1+b2)/2.0*h;
cout << "Square is:" << square;
}
int main()
{
 square_trapecia();//вызов функции задания 1
    return 0;
}
