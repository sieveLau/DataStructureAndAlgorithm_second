#include "SelectionSort.h"

void selection_sort(int * array, const size_t length)
{
	int* current = array;
	int* min;
	int temp = 0;
	for (unsigned int i = 0; i < length; ++i)
	{
		current = array + i;
		min = current;
		for (unsigned int j = i; j < length; ++j)
		{
			if(*current<*min)
			{
				min = current;
			}
			current++;
		}
		temp = *(array+i);
		*(array + i) = *min;
		*min = temp;
	}
}