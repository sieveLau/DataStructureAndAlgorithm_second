#pragma once
#include <iostream>

namespace at
{
	template <typename T, size_t SIZE>
	void PrintArray(const T (&array)[SIZE])
	{
		auto count = 0;
		while (count < SIZE)
			std::cout << array[count++] << std::endl;
	};
}
