#include "merge_sort.h"

void merge(int a[], const int low,const int mid, const int high) {
    // subarray1 = a[low..mid], subarray2 = a[mid+1..high], both sorted
    int N = high - low + 1;
    int* b = new int[N];  // discuss: why do we need a temporary array b?
    int left = low, right = mid + 1, bIdx = 0;
    while (left <= mid && right <= high)  // the merging
        b[bIdx++] = (a[left] <= a[right]) ? a[left++] : a[right++];
    while (left <= mid) b[bIdx++] = a[left++];      // leftover, if any
    while (right <= high) b[bIdx++] = a[right++];   // leftover, if any
    for (int k = 0; k < N; k++) a[low + k] = b[k];  // copy back
    delete[]b;
}

void MergeSort(int a[], int low, int high) {
    // the array to be sorted is a[low..high]
    if (low < high) {  // base case: low >= high (0 or 1 item)
        int mid = (low + high) / 2;
        MergeSort(a, low, mid);       // divide into two halves
        MergeSort(a, mid + 1, high);  // then recursively sort them
        merge(a, low, mid, high);     // conquer: the merge subroutine
    }
}
