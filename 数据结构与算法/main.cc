#include <cstdio>
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


    ll.Delete(3);

    sieve::LinkedList ll_2(ll);

    

    printf("%d\n", ll_2.GetData(1));
}
