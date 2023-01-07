#pragma once

int findmax(double arr[], int size) {
	int max = -9999999;
	int idx_max = 0;
	for (int i = 0; i < size; ++i) {
		if (arr[i] > max) {
			max = arr[i];
			idx_max = i;
		}
	}
	
	return idx_max;
}