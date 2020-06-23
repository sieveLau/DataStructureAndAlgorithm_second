#include <cstdio>
#include <string>
#include "defs.h"
#include "assist_tools.h"
#include "double_linked_list.h"
#include "linked_list.h"
#include "math.h"
#include "merge_sort.h"
#include "sorted_linked_list.h"
int main() {
    int array[]{3, 5, 6, 4, 40, 7, 22, 8, 9, 10};
    // MergeSort(array, 0, 1);
    // MergeSort(array, 2, 2);
    // MergeSort(array, 0, 2);

    // for (; gap <= length;) {
    //     for (int i = 0; i < length;) {
    //         MergeSort(array, i, i + gap - 1);
    //         i += gap;
    //         if (i + gap > length) {
    //             MergeSort(array, i - gap, length - 1);
    //             break;
    //         }
    //     }
    //     gap *= 2;
    // }
    MergeSort(array, 0, 9);
    // MergeSort(array, 0, 1);
    // MergeSort(array, 0, 2);
    // MergeSort(array, 3, 4);
    // MergeSort(array, 5, 6);
    // MergeSort(array, 7, 8);
    // MergeSort(array, 0, 3);
    // MergeSort(array, 0, 4);
    // MergeSort(array, 5, 8);
    // MergeSort(array, 0, 8);

    for (int i = 0; i < 10; i++) { printf("%d\t", array[i]); }
    // 2 4 8

    //     temp_array[0] = array[0] > array[1] ? array[1] : array[0];
    //     temp_array[1] = array[0] < array[1] ? array[1] : array[0];

    //     array[0] = temp_array[0];
    //     array[1] = temp_array[1];

    // //low=2,high = 3,mid=2
    // // low>high?
    //     temp_array[0] = array[2] > array[3] ? array[3] : array[2];
    //     temp_array[1] = array[2] < array[3] ? array[3] : array[2];

    //     array[2] = temp_array[0];
    //     array[3] = temp_array[1];

    // //low = 0,high=3,mid=1
    // // low:mid+1
    // // low+1:mid+1+1
    //     temp_array[0] = array[0] < array[2] ? array[0] : array[2];
    //     temp_array[1] = array[0] < array[2] ? array[2] : array[0];
    //     temp_array[2] = array[1] > array[3] ? array[3] : array[1];
    //     temp_array[3] = array[1] < array[3] ? array[3] : array[1];

    //     // low ~ high
    //     // i mid+i+1
    //     // 0 1+0+1
    //     // 1 1+1+1
    //     // 0 0 2
    //     // 1 0 2
    //     // 2 1 3
    //     // 3 1 3

    //     array[0] = temp_array[0];
    //     array[1] = temp_array[1];
    //     array[2] = temp_array[2];
    //     array[3] = temp_array[3];

    return 0;
}
