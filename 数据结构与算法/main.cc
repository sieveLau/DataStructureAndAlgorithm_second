#include <iostream>
#include "bubble_sort.h"
#include "assist_tools.h"
#include "selection_sort.h"
#include "insertion_sort.h"

int main()
{
	int array[] = {10, 2, 3, 11, 412, 1231, 8, 112};
	//bubble_sort<int>(array);
	sieve::InsertionSort(array, sizeof(array) / sizeof(array[0]));
	at::PrintArray<int>(array);
}
