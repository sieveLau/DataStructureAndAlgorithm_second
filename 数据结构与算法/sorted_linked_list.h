#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "linked_list.h"

namespace sieve
{
    class SortedLinkedList
    {
        LinkedList* ll_;
        void Sort();
    public:
        SortedLinkedList();
        SortedLinkedList(const LinkedList& ll);
        SortedLinkedList(const SortedLinkedList& source);
        explicit SortedLinkedList(int data);
        void Insert(int data);
        void Delete(size_t position);
        void Find(int data);
        size_t GetLength() const { return ll_->GetLength(); }

        ~SortedLinkedList()
        {
            delete ll_;
        }
    };
}
#endif
