#pragma once

void special_sort(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j + 1]);
			}
		}
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > 0) {
				if (arr[j] < arr[j + 1]) {
					std::swap(arr[j], arr[j + 1]);
				}
			}
		}
	}
}
