#include "sorted_linked_list.h"
#include <memory>

sieve::SortedLinkedList::SortedLinkedList()
{
    ll_ = new LinkedList();
}

sieve::SortedLinkedList::SortedLinkedList(const SortedLinkedList& source)
{

}

sieve::SortedLinkedList::SortedLinkedList(int data)
{
    ll_ = new LinkedList(data);
}

void sieve::SortedLinkedList::Insert(int data)
{
}
