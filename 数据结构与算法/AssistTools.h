#pragma once
#include <iostream>

namespace at {
	template<typename T, size_t SIZE>
	void print_array(const T (&array)[SIZE])
	{
		int t = 0;
		while (t<SIZE)
		{
			
			std::cout << array[t++] << std::endl;
			
		}
	};
}
	;
