#pragma once
#include "utility"
#include "test_data_class.h"

template <typename T>
class Node
{
public:
    explicit Node(T data, Node* next_node = nullptr) {
        data_= T(std::move(data));
        next_node_ = next_node;
    };

    Node(const Node& another) {
        data_ = another.data_;
        next_node_ = another.next_node_;
    };

    Node(Node&& another) noexcept
        : Node() {
        swap(*this, another);
    };

    friend void swap(Node& dest, Node& src) noexcept {
        using std::swap;
        swap(dest.data_, src.data_);
        swap(dest.next_node_, src.next_node_);
    };

    Node& operator=(Node another) {
        swap(*this, another);
        return *this;
    };

    ~Node() {
        next_node_ = nullptr;
    };
    // 给复制品，不影响内容
    T GetData() {
        return data_;
    };

    void SetData(T data) {
        data_=T(std::move(data));
    };

    Node* GetNextNode() {
        return next_node_;
    };

    void SetNextNode(Node* next_node) {
        next_node_ = next_node;
    };

private:
    T data_;
    Node* next_node_;
};
