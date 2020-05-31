#include "linked_list.h"
#include <memory>
#include <stdexcept>
#define NOTFOUND (-1)
namespace sieve {
	LinkedList::LinkedList(int data)
	{
		head_ = new Node(data, nullptr);
		length_ = 1;
	}

	void LinkedList::Insert(const int data, const size_t position)
	{
		if(position==0)
		{
			Node* new_node = new Node(data, head_);
			head_ = new_node;
		}
		else {
			Node* pre_node = GetNode(position - 1);
			Node* origin_node = pre_node->GetNextNode();
			Node* new_node = new Node(data, origin_node);
			pre_node->SetNextNode(new_node);
		}
		++length_;
	}

	void LinkedList::InsertToTail(int data)
	{
		Insert(data, length_);
	}

	void LinkedList::InsertToHead(const int data)
	{
		Insert(data, 0);
	}

	int LinkedList::Find(const int data) const
	{
		auto current = head_;
		size_t position = 0;
		while (current->GetData() != data && current != nullptr) {
			current = current->GetNextNode();
			++position;
		}
		if (current==nullptr)
		{
			return NOTFOUND;
		}
		return position;
        
        
        
	}

	void LinkedList::Delete(const size_t position)
	{
		auto pre_node = GetNode(position-1);
		auto origin_node = pre_node->GetNextNode();
		pre_node->SetNextNode(origin_node->GetNextNode());
		delete origin_node;
	}

	size_t LinkedList::GetLength() const
	{
		return length_;
	}

	int LinkedList::GetData(const size_t position) const
	{
		return GetNode(position)->GetData();
	}
}