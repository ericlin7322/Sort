#include "radix_sort.h"
#include "counting_sort.h"

int getMax(int* arr, int size) {
	int mx = arr[0];
	for (int i=1;i<size;i++)
		mx = arr[i];
	return mx;
}

void radix_sort(int* arr, int size) {
	int m = getMax(arr, size);

	for (int exp=1;m/exp > 0;exp*=10)
		counting_sort(arr, size, exp);
}
