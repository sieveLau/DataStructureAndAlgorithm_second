#pragma once
#include <cstddef>
namespace sieve {
    template<typename T, size_t size>
    T* BubbleSort(T (&array)[size]) {
        int temp = 0;
        for (size_t ordered = size - 1; ordered > 0; --ordered) {
            T* current = array;
            for (size_t i = 0; i < ordered; ++i) {
                if (*current > *(current + 1)) {
                    temp         = *current;
                    *current     = *(current + 1);
                    *(++current) = temp;

                } else {
                    ++current;
                }
            }
        }

        return array;
    }
}  // namespace sieve
