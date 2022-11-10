#include <stdio.h>
#include "bubble_sort.h"
#include "selection_sort.h"
#include "insertion_sort.h"
#include "gnome_sort.h"
#include "quick_sort.h"
#include "shell_sort.h"
#include "merge_sort.h"

void printArray(int* arr, int size);

int main() {
	int arr[6] = { 10, 7, 8, 9, 1, 5 };

	printf("Origin arr: ");
	printArray(arr, 6);

	//bubble_sort(arr, 5);
	//selection_sort(arr, 5);
	//insertion_sort(arr, 5);
	//gnome_sort(arr, 6);
	//quick_sort(arr, 0, 6-1);
	//shell_sort(arr, 6);
	merge_sort(arr, 0, 6-1);

	printf("Sorted arr: ");
	printArray(arr, 6);

	return 0;
}

void printArray(int* arr, int size) {
	for (int i=0;i<size;i++)
		printf("%d ", arr[i]);
	printf("\n");
}
