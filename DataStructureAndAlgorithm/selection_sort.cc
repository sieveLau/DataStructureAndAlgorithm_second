#include "selection_sort.h"

namespace sieve
{
	void SelectionSort(int* array, const size_t length)
	{
		auto current = array;
		for (size_t i = 0; i < length; ++i)
		{
			current = array + i;
			int* min = current;
			for (auto j = i; j < length; ++j)
			{
				if (*current < *min)
				{
					min = current;
				}
				current++;
			}
			auto temp = *(array + i);
			*(array + i) = *min;
			*min = temp;
		}
	}
}
