#include "insertion_sort.h"
namespace sieve {
	void InsertionSort(int * array,const size_t length)
	{
		
		const auto kBegin = array;
		//auto end = array + length -1;
		size_t count = 1;

		while (count <= length -1) {
			auto current = array + count;
			const auto kTemp = *current;
			while (--current >= kBegin && kTemp < *current)
			{
				*(current + 1) = *current;

			}
			*(current + 1) = kTemp;
			++count;
		}
	}
}