#include <iostream>
#include <math.h>

using namespace std;

//задание 9-обьявление функции нахождения количества часов и минут
void minutes(){
    int a,minut;
    int hours=0;
    cout << "Enter amount of seconds: "<< endl;
    cin >> a;
    
    if (a>3600){
        hours=a/3600;
        minut=(a-3600*hours)/60;
        cout << "Passed hours= " << hours <<endl;
        cout << "Passed minutes= " << minut <<endl;
        
    }
    else if (a<3600){
        minut=(a-3600*hours)/60;
        cout << "Passed minutes= " << minut <<endl;
}
}
    
int main()
{
    minutes(); //вызов функции задания 9
    return 0;
};