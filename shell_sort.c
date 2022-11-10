#include "shell_sort.h"

void shell_sort(int* arr, int size) {
	for (int span = size / 2;span > 0;span /= 2) {
		for (int i = span;i < size;i++) {
			int temp = arr[i];
			int j;
			for (j=i;j>= span && arr[j-span] > temp;j-=span)
				arr[j] = arr[j-span];

			arr[j] = temp;
		}
	}
}
