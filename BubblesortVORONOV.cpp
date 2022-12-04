#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int arrLength) //реализация сортировки
{
	for (int i = 0; i < arrLength; i++) {
		for (int j = 0; j < arrLength - 1; j++) {
			T temp;// без swap, временная переменная для замены элементов массива
			if (arr[j] > arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	int arr[] = { 1,90,7,42,11 };// для int
	int size_arr = sizeof(arr) / sizeof(arr[0]);
	std::cout << "size_arr = " << size_arr << std::endl;

	bubbleSort(arr, size_arr); // Cортировка int

	for (int i = 0; i < size_arr; ++i)
		std::cout << arr[i] << " ";
	cout << std::endl;

	double arr2[] = { 1.5, 9.1, 2.5, 80.4, 13.5, 101.0, 3.0 };//для double
	int size_arr2 = sizeof(arr2) / sizeof(arr2[0]);
	cout << "size_arr = " << size_arr2 << std::endl;

	bubbleSort(arr2, size_arr2); //Cортировка double

	for (int i = 0; i < size_arr2; ++i)
		std::cout << arr2[i] << " ";

	return 0;
}
