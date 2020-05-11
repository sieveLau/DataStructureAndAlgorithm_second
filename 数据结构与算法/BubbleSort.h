#pragma once
template<typename T,size_t Size>
T* bubble_sort(T(&array)[Size])
{
	
	int temp = 0;
	for (size_t ordered = Size-1; ordered > 0; --ordered) {
		T* current = array;
		for (size_t i = 0; i < ordered; ++i) {
			if (*current > * (current + 1))
			{
				temp = *current;
				*current = *(current + 1);
				*(++current) = temp;

			}
			else { ++current; }
		}
	}

	return array;
};
