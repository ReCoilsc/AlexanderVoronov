#include <iostream>
#include <math.h>

using namespace std;

// ЗАДАНИЕ 20-Даны вещественные положительные числа a, b, c, d. Выяснить, можно ли прямоугольник со
//сторонами a, b поместить в прямоугольник со сторонами c, d так, чтобы стороны одного
//прямоугольника были параллельны сторонам другого

void square(){
    float a,b,c,d;
    cout << "Enter number a: ";
    cin >> a;
    cout << "Enter number b: ";
    cin >> b;
    cout << "Enter number c: ";
    cin >> c;
    cout << "Enter number d: ";
    cin >> d;
    
    if (((a <= c) and (b <= d)) or ((a <= d) and (b <= c)))
    cout << "Можно поместить!" << endl;
    else
    cout << "Нельзя поместить!" << endl;
}

int main()
{
    square(); //вызов функции задания 20
    return 0;
}

