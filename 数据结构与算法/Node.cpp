#include "Node.h"

Node::Node(int data): data_(data), nextnode_(nullptr)
{
}

Node::Node(int data, Node* nextnode): data_(data), nextnode_(nextnode){}

int Node::GetData() const
{
	return data_;
}

void Node::SetData(int data)
{
	data_ = data;
}

Node* Node::GetNextNode() const
{
	return nextnode_;
}

void Node::SetNextNode(Node* next_node)
{
	nextnode_ = next_node;
}

Node::~Node()
{
	data_ = 0;
	nextnode_ = nullptr;
}
