#include <stdio.h>
#include <unistd.h>
#include "bubble_sort.h"
#include "selection_sort.h"
#include "insertion_sort.h"
#include "gnome_sort.h"
#include "quick_sort.h"
#include "shell_sort.h"
#include "merge_sort.h"
#include "counting_sort.h"
#include "radix_sort.h"

void printArray(int* arr, int size);

int main(int argc, char **argv) {
	
	int size = 6;
	int arr[] = { 2, 7, 8, 9, 1, 5 };

	printf("Origin arr: ");
	printArray(arr, size);
	
	int cmd_opt = 0;
	while (1) {
		cmd_opt = getopt(argc, argv, "bcgimqrsl:");
		if (cmd_opt == -1)
			break;

		switch (cmd_opt) {
			case 'b':
				bubble_sort(arr, size);
			case 'c':
				counting_sort(arr, size, 1);
			case 'g':
				gnome_sort(arr, size);
			case 'i':
				insertion_sort(arr, size);
			case 'm':
				merge_sort(arr, 0, size-1);
			case 'q':
				quick_sort(arr, 0, size-1);
			case 'r':
				radix_sort(arr, size);
			case 's':
				selection_sort(arr, size);
			case 'l':
				shell_sort(arr, size);
		}


	}

	printf("Sorted arr: ");
	printArray(arr, size);

	return 0;
}

void printArray(int* arr, int size) {
	for (int i=0;i<size;i++)
		printf("%d ", arr[i]);
	printf("\n");
}
