/*Формат входных данных
В каждой строке сначала записан номер класса (число, равное 9, 10 или 11), затем (через пробел) – фамилия ученика.
 Общее число строк в файле не превосходит 100000. Длина каждой фамилии не превосходит 50 символов.
Формат выходных данных
Необходимо вывести список школьников по классам: сначала всех учеников 9 класса, затем – 10, затем – 11.
 Внутри одного класса порядок вывода фамилий должен быть таким же, как на входе.*/
 
#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    multimap <int, string> pupil;
    fstream file("input.txt");

    while (file) {
        string line;
        getline(file, line);
        stringstream ss(line);
        int a=0;
        string a1;
        ss >> a >> a1;
        pupil.insert(make_pair(a, a1));
    }

    multimap <int, string>::iterator pos;
    pos = pupil.begin();
    pupil.erase(pos);//в начало мультимепа  после сортировки добавляется лишний 0, его необходимо удалить, чтобы все заработало, без этого костыля не придумал как решать...
    //а если в int не класть значение 0, то будет возникать рандомный лишний элемент с классом но без фамилии

    for (pos = pupil.begin(); pos != pupil.end(); ++pos) {
        cout << pos->first << " " << pos->second << endl;
    }
    return 0;
}