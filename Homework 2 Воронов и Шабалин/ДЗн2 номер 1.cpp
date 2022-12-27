#include <iostream>

using namespace std;
void swap(int *x, int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}

int main()
{
    int a=11;
    int b=100;
    swap(&a,&b);
    cout<<"a = " << a << endl;
    cout<<"b = " << b << endl;

    return 0;
}
