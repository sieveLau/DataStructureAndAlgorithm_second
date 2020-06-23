#pragma once
#include <stdexcept>
#include <string>

#include "node.h"
namespace sieve {
    class LinkedList {
       public:
        LinkedList();
        explicit LinkedList(int data);
        LinkedList(const LinkedList& another);

        LinkedList& operator=(LinkedList another) {
            swap(*this, another);
            return *this;
        };
        
        LinkedList(LinkedList&& another) noexcept : LinkedList() {
            swap(*this, another);
        };
        friend void swap(LinkedList& dest, LinkedList& src) noexcept {
            using std::swap;
            swap(dest.length_, src.length_);
            swap(dest.head_, src.head_);
        };

        ~LinkedList();

        void Insert(int data, size_t position);
        void InsertToTail(int data);
        void InsertToHead(int data);
        int Find(int data);
        // bool Has(int data);
        void Delete(size_t position);

        auto GetLength() const -> size_t { return length_; };
        int GetData(size_t position) const;

        int* ToArray() const;
        std::string ToString() const;

        

       private:
        Node* head_;
        size_t length_;
        Node* GetNode(size_t position) const;

        friend class SortedLinkedList;
    };

    inline Node* LinkedList::GetNode(const size_t position) const {
        if (position >= length_)
            return nullptr;

        size_t i     = 0;
        auto current = head_;
        while (i != position && i < length_) {
            current = current->GetNextNode();
            ++i;
        }
        return current;
    }
}  // namespace sieve
