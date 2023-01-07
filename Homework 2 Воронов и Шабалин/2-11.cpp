#include <iostream>

int main() {

	int n = 2;

	int m = 3;

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

	std::swap(matrix[0][0], matrix[n - 1][m - 1]);
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < m; j++) {
			std::swap(matrix[i][j], matrix[i][j - 1]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	return 0;
}