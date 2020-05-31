#include "binary_search.h"

namespace sieve
{
	int BinarySearch(int * array, const size_t length, const int search_for)
	{
		auto current = array;
		if (*current == search_for) return (current - array);
		auto temp = length;
		size_t add = (length - 1) / 2;
		current += add;
		do
		{
			if ((temp - add == 1) && *(array + temp) != search_for && *(array + add) != search_for)return -1;
			if (*current == search_for)return add;
			if (*current > search_for)
			{
				temp = add;
				add /= 2;
			}else if(*current<search_for)
			{
				add = (temp + add) / 2;
			}
			current = array + add;
		}
		while (true);
		
	}
}