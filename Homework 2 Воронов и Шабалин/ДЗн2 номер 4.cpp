#include <iostream>

using namespace std;
int p=0;
void bubbleSort(double arr[], int arrLength) //реализация сортировки bubbleSort
{
	for (int i = 0; i < arrLength; i++) {
		for (int j = 0; j < arrLength - 1; j++) {
			double temp;// без swap, временная переменная для замены элементов массива
			if (arr[j] < arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				p++;
			}
		}
	}
}


int main()
{
    int n = 12;
	double* array = new double[n];
	for (int i = 0; i <= n - 1; i++) {
		std::cin >> array[i];
	}
	for (int i = 0; i <= n - 1; i++) {
		std::cout << array[i] << " ";
	}
	
	bubbleSort(array, n); //сортировка по убыванию
	
	cout << endl;
	
	for (int i = 0; i <= n - 1; i++) {
		std::cout << array[i] << " ";
	}
	
	cout << endl << "Количество перестановок: " << p;
	

    return 0;
}