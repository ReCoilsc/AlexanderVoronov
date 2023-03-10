#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool func(string stroka) {
    stack <char> skobki;
    for (char polovinka : stroka) {
        if (polovinka == '(' or polovinka == '[' or polovinka == '{') {
            skobki.push(polovinka);//добавляем в стек
        }
        else {
            if (skobki.empty()) {
                return false;
            }
            char golovnoi = skobki.top(); //cохраняем головной элемент стека
            skobki.pop(); //удаляем его
            if ((polovinka == ')' && golovnoi != '(') or (polovinka == ']' && golovnoi != '[') or (polovinka == '}' && golovnoi != '{')) {
                return false;
            }
        }
    }
    return skobki.empty();   
}

int main() {
    string stroka;
    cin >> stroka;
    if (func(stroka)) {
        cout << "yes";
    } else {
        cout << "no";
    }
    return 0;
}