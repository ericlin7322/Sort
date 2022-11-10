#include <stdio.h>
#include "swap.h"
#include "selection_sort.h"

void selection_sort(int* arr, int size) {
	for (int i=0;i<size;i++) {
		int min = i;
		for (int j=i+1;j<size;j++)
			if (arr[j] < arr[min])
				min = j;

		if (min != i)
			swap(&arr[min], &arr[i]);
	}
}
