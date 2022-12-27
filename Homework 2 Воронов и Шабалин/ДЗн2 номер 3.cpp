#include <iostream>

using namespace std;

int main()
{
    double **p = 0;
    double t=2;
    double *p1=&t;
    p=&p1;//передаем двойному указателю адрес первого
    cout << **p; //разыменование двойного указателя
    p=NULL; //зануляем перед удалением
    p1=NULL;
    delete p;
    delete p1;
    

    return 0;
}