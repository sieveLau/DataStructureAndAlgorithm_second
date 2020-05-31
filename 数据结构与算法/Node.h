#pragma once

class Node
{
public:
	explicit Node(int data);

	explicit Node(int data, Node* nextnode);

	int GetData() const;

	void SetData(int data);

	Node* GetNextNode() const;

	void SetNextNode( Node* next_node);

	~Node();
private:
	int data_;
	Node * nextnode_;
	
};
