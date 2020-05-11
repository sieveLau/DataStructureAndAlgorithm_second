// 数据结构与算法.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "BubbleSort.h"
#include "AssistTools.h"
#include "SelectionSort.h"
int main()
{
    int array[] = { 10,2,3,11,412,1231,8,112 };
    //bubble_sort<int>(array);
    selection_sort(array, sizeof(array) / sizeof(array[0]));
	at::print_array<int>(array);
}

