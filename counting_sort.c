#include "counting_sort.h"

void counting_sort(int* arr, int size, int exp) {
	int output[size], count[10] = {0};
	
	for (int i=0;i<size;i++)
		count[(arr[i] / exp)%10]++;

	for (int i=1;i<10;i++)
		count[i] += count[i-1];

	for (int i=size-1;i>=0;i--) {
		output[count[(arr[i]/exp)%10]-1] = arr[i];
		count[(arr[i]/exp)%10]--;
	}

	for (int i=0;i<size;i++)
		arr[i] = output[i];

}
