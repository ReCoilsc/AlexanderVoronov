#include <iostream>

int main() {

	int n = 2;

	int m = 3;

	int max = 0;
	int min = 0;
	int sum = 0;
	int max_num;
	int min_num;

	int** matrix = new int*[n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[m];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0) {
				sum += matrix[i][j];
				min += matrix[i][j];
				max += matrix[i][j];
			}
			else {
				sum += matrix[i][j];
			}
		}
		if (sum > max) {
			max = sum;
			max_num = i;
		}
		if (sum < min) {
			min = sum;
			min_num = i;
		}
		sum = 0;
	}

	for (int j = 0; j < m; j++) {
		std::cout << matrix[max_num][j] << " ";
	}
	std::cout << max;

	for (int j = 0; j < m; j++) {
		std::cout << matrix[min_num][j] << " ";
	}
	std::cout << min << "\n";


	return 0;
}