#include "gnome_sort.h"
#include "swap.h"

void gnome_sort(int* arr, int size) {
	int i=0;

	while (i < size) {
		if (i == 0)
			i++;
		if (arr[i] >= arr[i-1])
			i++;
		else {
			swap(&arr[i], &arr[i-1]);
			i--;
		}
	}
}
