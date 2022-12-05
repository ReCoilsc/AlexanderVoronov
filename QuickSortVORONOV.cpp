#include <iostream>
#include <ctime>    // для работы рандома
#include <stdlib.h> // для работы рандома

template <typename T>
void quickSort(T arr[], int idx_start, int idx_end)//функция для сортировки
{
    int idx_pivot = rand() % 5;//рандомно выбирается индекс опорного элемента

    int pivot = arr[idx_pivot];// сам опорный элемент

    int i = idx_start, j = idx_end;

    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            /*
            arr[i] = arr[i] + arr[j];//ЛАЙФХАК С ПАРЫ, НЕ ПОНИМАЮ ПОЧЕМУ НЕ РАБОТАЕТ
            arr[j] = arr[i] - arr[j];//С ИНТОВЫМ МАССИВОМ, С double ВСЕ НОРМАЛЬНО,
            arr[i] = arr[i] - arr[j];//ОШИБКА ТОЧНО НЕ В РАНДОМЕ И НЕ В АРИФМЕТИКЕ,
            //ЭТО ВСЕ ПРОВЕРЯЛ
            */
            T temp;//реализация swap
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            i++;
            j--;
        }
    }
    if (idx_start < j)
        quickSort(arr, idx_start, j); //для левой части массива
    if (i < idx_end)
        quickSort(arr, i, idx_end); //для правой части массива
}

int main()
{
    int arr[] = { 44,9,7,4,11,10,22 };
    int size_arr = sizeof(arr) / sizeof(arr[0]);
    std::cout << "size_arr = " << size_arr << std::endl;

    quickSort(arr, 0, size_arr - 1);

    for (int i = 0; i < size_arr; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    double arr2[] = { 1.5, 9.5, 7.5, 4.5, 11.5 };
    int size_arr2 = sizeof(arr2) / sizeof(arr2[0]);
    quickSort(arr2, 0, size_arr2 - 1);

    for (int i = 0; i < size_arr2; ++i)
        std::cout << arr2[i] << " ";

    return 0;
}
