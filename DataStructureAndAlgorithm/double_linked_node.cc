#include "double_linked_node.h"
#include <memory>

namespace sieve {
    DoubleLinkedNode::DoubleLinkedNode(int data, DoubleLinkedNode* prev_node,
                                       DoubleLinkedNode* next_node)
        : data_(data),
          next_node_(next_node),
          prev_node_(prev_node) {
    }

    DoubleLinkedNode::DoubleLinkedNode(const DoubleLinkedNode& another) {
        data_      = another.data_;
        prev_node_ = another.prev_node_;
        next_node_ = another.next_node_;
    }

    DoubleLinkedNode::~DoubleLinkedNode() {
        data_      = 0;
        prev_node_ = nullptr;
        next_node_ = nullptr;
    }

    void DoubleLinkedNode::SetData(int data) { data_ = data; }

    void DoubleLinkedNode::SetNextNode(DoubleLinkedNode* node) {
        next_node_ = node;
    }

    void DoubleLinkedNode::SetPrevNode(DoubleLinkedNode* node) {
        prev_node_ = node;
    }

    int DoubleLinkedNode::GetData() const { return data_; }

    DoubleLinkedNode* DoubleLinkedNode::GetNextNode() const { return next_node_; }

    DoubleLinkedNode* DoubleLinkedNode::GetPrevNode() const { return prev_node_; }

    DoubleLinkedNode& DoubleLinkedNode::operator=(
        const DoubleLinkedNode& another) {
        if (!(&another == this)) {
            data_      = another.data_;
            next_node_ = another.next_node_;
            prev_node_ = another.prev_node_;
        }
        return *this;
        }

    }// namespace sieve


