//Дано N чисел, требуется выяснить, сколько среди них различных.

#include <iostream>
#include <set>
using namespace std;

int main()
{
    int number=0;
    cin >> number;
    set<int> spisok; //про set написано в теории с сайта информатикс
    for (int i = 0; i < number; i++) {
        int k=0;
        cin >> k;
        spisok.insert(k); 
    }
    int N = int(spisok.size());
    cout << N;
    
    return 0;
}