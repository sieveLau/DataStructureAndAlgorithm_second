#pragma once

#include "linked_list.h"

namespace sieve {
    class LinkedList;
    class SortedLinkedList {
        LinkedList* ll_;

       public:
        SortedLinkedList();
        explicit SortedLinkedList(const LinkedList& ll);
        SortedLinkedList(const SortedLinkedList& source);
        explicit SortedLinkedList(int data);

        void Insert(int data);
        int GetData(size_t position) { return ll_->GetData(position); }

        void Delete(size_t position) { ll_->Delete(position); };

        int Find(int data) { return ll_->Find(data); };

        size_t GetLength() const { return ll_->GetLength(); }
        int* ToArray() { return ll_->ToArray(); }
        std::string ToString() { return ll_->ToString(); }

        ~SortedLinkedList() { delete ll_; }
    };
}  // namespace sieve
