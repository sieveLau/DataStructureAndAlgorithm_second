#pragma once
#include <stdexcept>
#include <string>

#include "node.h"
#include "test_data_class.h"
namespace sieve
{
    class LinkedList
    {
    public:
        LinkedList() {
            head_ = nullptr;
            length_ = 0;
        };
        explicit LinkedList(TestData data) {
            head_ = new Node<TestData>(std::move(data));
            length_ = 1;
        };

        LinkedList(const LinkedList& another);

        LinkedList& operator=(LinkedList another) {
            swap(*this, another);
            return *this;
        };

        LinkedList(LinkedList&& another) noexcept
            : LinkedList() {
            swap(*this, another);
        };

        friend void swap(LinkedList& dest, LinkedList& src) noexcept {
            using std::swap;
            swap(dest.length_, src.length_);
            swap(dest.head_, src.head_);
        };

        ~LinkedList();

        // 插入时给一个复制品，保证内存由链表控制
        // 成功就true，不成功false
        bool Insert(TestData data, size_t position=0);

        int Find(int data);

        void Delete(size_t position);

        auto GetLength() const -> size_t {
            return length_;
        };


        // 给复制品，不影响list本身，要改就用Set
        TestData* GetData(size_t position) const {
            auto* target = GetNode(position);
            if (!(target==nullptr)) {
                return new TestData(std::move(target->GetData()));
            }
            return nullptr;
        }

        bool SetData(TestData data, size_t position);

        // std::string ToString() const;


    private:
        Node<TestData>* head_;
        size_t length_;
        inline Node<TestData>* GetNode(size_t position) const {
            if (position >= length_ || length_ == 0)return nullptr;
            auto i = position;
            auto* current = head_;
            while(i>0) {
                current = current->GetNextNode();
                i--;
            }
            return current;

        }
    };
} // namespace sieve
