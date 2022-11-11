CC = gcc

all: sort.c bubble selection insertion swap gnome quick shell merge count radix
	$(CC) -c sort.c
	$(CC) -o sort sort.o bubble_sort.o swap.o selection_sort.o insertion_sort.o gnome_sort.o quick_sort.o shell_sort.o merge_sort.o counting_sort.o radix_sort.o

bubble: bubble_sort.c bubble_sort.h
	$(CC) -c bubble_sort.c

selection: selection_sort.c selection_sort.h
	$(CC) -c selection_sort.c

insertion: insertion_sort.c insertion_sort.h
	$(CC) -c insertion_sort.c

gnome: gnome_sort.c gnome_sort.h
	$(CC) -c gnome_sort.c

quick: quick_sort.c quick_sort.h
	$(CC) -c quick_sort.c

shell: shell_sort.c shell_sort.h
	$(CC) -c shell_sort.c

merge: merge_sort.c merge_sort.h
	$(CC) -c merge_sort.c

count: counting_sort.c counting_sort.h
	$(CC) -c counting_sort.c

radix: radix_sort.c radix_sort.h
	$(CC) -c radix_sort.c

swap: swap.c swap.h
	$(CC) -c swap.c

clean: 
	rm sort.o bubble_sort.o swap.o selection_sort.o insertion_sort.o gnome_sort.o quick_sort.o shell_sort.o merge_sort.o counting_sort.o radix_sort.o sort
