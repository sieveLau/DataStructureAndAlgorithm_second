#include <cstdio>

#include "assist_tools.h"
#include "binary_search.h"
#include "bubble_sort.h"
#include "insertion_sort.h"
#include "linked_list.h"
#include "selection_sort.h"
#include "sorted_linked_list.h"
#include <string>
int main() {
    sieve::LinkedList ll(10);
    ll.InsertToHead(1);
    ll.InsertToHead(2);
    ll.InsertToHead(3);
    ll.InsertToHead(6);

    sieve::LinkedList ll_2(ll);

    sieve::SortedLinkedList sll(ll);

    printf("linkedlist1:%s\n", ll.ToString().c_str());
    printf("sortedlinkedlist:%s\n", sll.ToString().c_str());

    return 0;
}
