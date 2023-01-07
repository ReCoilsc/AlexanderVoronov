#include <iostream>
#include "2-9.h"

int main() {
	int n = 15;

	int *arr = new int[n];

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	special_sort(arr, n);

	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}

	return 0;
}