#include <iostream>
#include <string>
#include <stack>

using namespace std;

int reshenie (string stroka) {
    stack <int> pachka;
    for (int i = 0; i < stroka.length(); i++) {
        if (stroka[i] == ' ') continue; // пропускаем пробелы
        else if (isdigit(stroka[i])) {//когда попали на цифру
            int num = 0;
            while (isdigit(stroka[i])) {
                num = num * 10 + (int)(stroka[i] - '0');//конвертация в int
                i++;
            }
            i--;
            pachka.push(num);//закидываем значение в стек
        }
        else {//если попали на знак
            int znach2 = pachka.top();//берем последнее значение
            pachka.pop();//удаляем из стека
            int znach1 = pachka.top();//берем значение которое было предпоследним до удаления
            pachka.pop();//удаляем и его
            switch (stroka[i]) {
                case '+': pachka.push(znach1 + znach2); break;
                case '-': pachka.push(znach1 - znach2); break;
                case '*': pachka.push(znach1 * znach2); break;
            }
        }
    }
    return pachka.top();//результатом функции является ответ на пример
}

int main() {
    string stroka;
    getline(cin, stroka);//cчитываем строку
    cout << reshenie(stroka) << endl;
    return 0;
}