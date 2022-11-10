#include <iostream>
#include <math.h>

using namespace std;

//задание 11-Вычислить стоимость покупки с учётом скидки. Скидка в 10% предоставляется, если сумма
//покупки превышает 1000 рублей.
void price(){
    float a,a1;
    cout << "Enter a: "<< endl;
    cin >> a;
    if (a<=1000.0)
    cout << "Price is: " << a << endl;
    else
    {
        a1=a-((a/100)*10);
        cout << "Price with sale is " << a1;
}
}
int main()
{
    price(); //вызов функции задания 11
    return 0;
}