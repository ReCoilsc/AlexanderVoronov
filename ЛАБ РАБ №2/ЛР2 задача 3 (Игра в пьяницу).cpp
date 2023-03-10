/*Программа получает на вход две строки: первая строка содержит 5 чисел, разделенных пробелами — номера карт первого игрока,
вторая – аналогично 5 карт второго игрока. 
Карты перечислены сверху вниз, то есть каждая строка начинается с той карты, которая будет открыта первой.
Выходные данные
Программа должна определить, кто выигрывает при данной раздаче, и вывести слово first или second,
после чего вывести количество ходов, сделанных до выигрыша. Если на протяжении 106 ходов игра не заканчивается, программа должна вывести слово botva.*/
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <cmath>
using namespace std;

int main()
{
    deque <int> a1, a2;
    for (int i = 0; i <5 ; i++) {
        int k=0;
        cin >> k;
        a1.push_back(k);
    }
    
    for (int i = 0; i <5 ; i++) {
        int k=0;
        cin >> k;
        a2.push_back(k);
    }
    int count=0;// cчетчик шагов
    while (!a1.empty() && !a2.empty() && count <= 1000000) {
        ++count;
        deque<int>::iterator deq_iterator1 = a1.begin();
        deque<int>::iterator deq_iterator2 = a2.begin();
        int card_f = *deq_iterator1;
        int card_s = *deq_iterator2;
        a1.pop_front();
        a2.pop_front();

        if((card_f==0 && card_s==9))   {
            a1.push_back(card_f);
            a1.push_back(card_s);
        }
        else if(card_f==9 && card_s==0){
            a2.push_back(card_f);
            a2.push_back(card_s);
        }
        else if (card_f > card_s){
                a1.push_back(card_f);
                a1.push_back(card_s);
            }
        else if (card_f < card_s){
                a2.push_back(card_s);
                a2.push_back(card_f);
            }
           }
    if (a1.empty())
        cout << "second " << count << endl;
    else if (a2.empty()){
        cout << "first " << count << endl;
    }
    else cout << "botva";
    return 0;
}