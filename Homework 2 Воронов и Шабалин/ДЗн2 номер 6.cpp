#include <iostream>
/*Ввести массив, состоящий из 14 элементов действительного типа. Поме-
нять местами первую половину со второй. Определить количество
произведенных при этом перестановок.*/

using namespace std;

int main()
{
    int count=0;
    int n = 14;
	double* array = new double[n];
	for (int i = 0; i <= n - 1; i++) {
		cin >> array[i];
	}
	for (int i = 0; i <= n - 1; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	for (int i=0; i<7; i++){//можно пройтись только до половины массива
	    double temp=0;
	    temp=array[i];
	    array[i]=array[n/2+i];
	    array[n/2+i]=temp;
	    count++;
	}
	for (int i = 0; i <= n - 1; i++) {
		cout << array[i] << " ";
	}
    cout << endl << "Количество перестановок: " << count;
    return 0;
}
