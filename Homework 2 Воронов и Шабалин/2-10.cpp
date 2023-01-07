#include <iostream>
#include "2-10.h"
int main() {

	int n = 5;
	int m = 3;

	double* arr1 = new double[n];

	double* arr2 = new double[m];

	for (int i = 0; i < n; i++) {
		std::cin >> arr1[i];
	}

	std::cout << std::endl;

	for (int j = 0; j < m; j++) {
		std::cin >> arr2[j];
	}

	int idx_max1 = findmax(arr1, n);

	int idx_max2 = findmax(arr2, m);

	std::swap(arr1[idx_max1], arr2[idx_max2]);

	for (int i = 0; i < n; i++) {
		std::cout << arr1[i] << " ";
	}

	std::cout << std::endl;

	for (int j = 0; j < m; j++) {
		std::cout << arr2[j] << " ";
	}

	return 0;
}