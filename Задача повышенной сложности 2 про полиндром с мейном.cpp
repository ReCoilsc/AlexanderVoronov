#include <iostream>
using namespace std;

     int minMovesToMakePalindrome(string s) {
        int count=0;
        int length=s.size();//пришлось создать для строки 19, почему то компилятор не пропускал просто s.size

        for(int i=0; i<s.size()/2; i++){//цикл для пробежки только до середины строки
            int moving_start = i; //левый индекс
            int moving_end = s.size()-moving_start-1; //правый индекс

            while( moving_start < moving_end){//цикл для движения правого индекса к левому

                if (s[moving_start] == s[moving_end])//если "противоположные" элементы равны,     
                    break;                     //то ничего не трогаем и переходим к следующей итерации for
                else {
                    moving_end--;//в ином уменьшаем индекс с правой стороны, тем самым переходя к след элементу
                }
            }
            for (int j = moving_end; j < length - moving_start - 1; j++) {//swap для нужных соседних символов
                swap(s[j], s[j + 1]);
                count++;    
            }
        }
        return count;
    };

    int main(){
        string s = "aabb";
        cout << minMovesToMakePalindrome(s) << endl;
        string s1 = "letelt";
        cout << minMovesToMakePalindrome(s1);
    return 0;
};