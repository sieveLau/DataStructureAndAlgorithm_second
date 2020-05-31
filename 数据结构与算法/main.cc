#include <iostream>
#include "bubble_sort.h"
#include "assist_tools.h"
#include "selection_sort.h"
#include "insertion_sort.h"
#include "binary_search.h"
#include "linked_list.h"

int main()
{
	sieve::LinkedList ll(10);
	ll.InsertToHead(1);
	ll.InsertToHead(2);
	ll.InsertToHead(3);
	ll.InsertToHead(6);

	try
	{
		printf("%d\n", ll.GetData(10));
	}
	catch (std::out_of_range& e)
	{
		printf("%s\n", e.what());
	}
	
	ll.Delete(3);
	printf("%d\n", ll.GetData(3));

}
