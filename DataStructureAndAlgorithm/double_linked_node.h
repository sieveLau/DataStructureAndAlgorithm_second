#pragma once
class DoubleLinkedNode
{
    int data_;
    DoubleLinkedNode* next_node_;
    DoubleLinkedNode* prev_node_;
public:
    DoubleLinkedNode();
    DoubleLinkedNode(int data,DoubleLinkedNode* prev_node_=nullptr, DoubleLinkedNode* next_node = nullptr);
    DoubleLinkedNode(const DoubleLinkedNode& another);
    ~DoubleLinkedNode();

    
    void SetData();
    void SetNextNode(DoubleLinkedNode* node);
    void SetPrevNode(DoubleLinkedNode* node);

    int GetData();
    DoubleLinkedNode* GetNextNode();
    DoubleLinkedNode* GetPrevNode();
};
