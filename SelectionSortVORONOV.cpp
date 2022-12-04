#include <iostream>
using namespace std;

template <typename T>
int findMinArrIndx(T arr[], int startIndx, int arrLength) //Для SelectionSort нужно находить минимальный элемент массива, это функция для поиска индекса этого массива
{
	int minArrIndx = startIndx;// будет браться из цикла в main

	for (int i = startIndx; i < arrLength; i++)
	{
		if (arr[i] < arr[minArrIndx])
			minArrIndx = i;
	}
	return minArrIndx;
}

template <typename T>
void selectionSort(T arr[], int arrLength) //Реализация функции Selection сортировки
{
	for (int i = 0; i < arrLength; i++)
	{
		int minArrIndx = findMinArrIndx(arr, i, arrLength);
		swap(arr[i], arr[minArrIndx]);
	}
}

int main()
{
	int arr[] = { 13, 18, 4, 9, 11, 8, 22 };
	int size_arr = sizeof(arr) / sizeof(arr[0]);
	std::cout << "size_arr = " << size_arr << std::endl;

	selectionSort(arr, size_arr); //вызов сортировки

	for (int i = 0; i < size_arr; ++i) //вывод отсортированного массива
		cout << arr[i] << " ";
	cout << endl;

	double arr2[] = { 1.5, 2.5, 1.7, 8.9, 13.5, 11000.7, 9.0 };
	int size_arr2 = sizeof(arr2) / sizeof(arr2[0]);
	cout << "size_arr = " << size_arr2 << std::endl;

	selectionSort(arr2, size_arr2); //вызов сортировки

	for (int i = 0; i < size_arr2; ++i) //вывод отсортированного массива
		cout << arr2[i] << " ";
	cout << endl;
	return 0;
}


