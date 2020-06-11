#include "double_linked_node.h"

namespace sieve {
    DoubleLinkedNode::DoubleLinkedNode(int data, DoubleLinkedNode* prev_node,
                                       DoubleLinkedNode* next_node)
        : data_(data), next_node_(next_node), prev_node_(prev_node) {}
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
}  // namespace sieve