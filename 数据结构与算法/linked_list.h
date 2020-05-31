#pragma once
#include "Node.h"
#include <stdexcept>
namespace sieve {
	class LinkedList
	{
	public:
		explicit LinkedList(int data);
		void Insert(const int data, const size_t position);
		void InsertToTail(int data);
		void InsertToHead(const int data);
		int Find(const int data) const;
		//bool Has(int data);
		void Delete(const size_t position);
		size_t GetLength() const;
		int GetData(const size_t position) const;
	private:
		Node* head_;
		size_t length_;
		Node* GetNode(const size_t position) const;
	};

	inline Node* LinkedList::GetNode(const size_t position) const
	{
		
		if (position >= length_ || position < 0)throw std::out_of_range("Out of range, check your call. In: sieve::LinkedList::GetNode()");
		auto i = 0;
		auto current = head_;
		while (i != position && i < length_)
		{
			current = current->GetNextNode();
			++i;
		}
		return current;
	}
}

