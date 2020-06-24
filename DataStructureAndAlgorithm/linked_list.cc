#include "linked_list.h"

namespace sieve
{
    LinkedList::LinkedList(const LinkedList& another) {
        auto* his_current = another.head_->GetNextNode();
        head_ = new Node<TestData>(another.head_->GetData());
        auto* my_current = head_;
        while (his_current != nullptr) {

            // 我的下一个的数据是它的下一个的数据，nextnode下一个循环再设置
            // his_current比my_current的位置后一个
            my_current->SetNextNode(new Node<TestData>(his_current->GetData()));

            my_current = my_current->GetNextNode();
            his_current = his_current->GetNextNode();
        }
        length_ = another.length_;
    }

    LinkedList::~LinkedList() {
        auto* to_delete = head_;
        while (head_ != nullptr) {
            head_ = to_delete->GetNextNode();
            delete to_delete;
            to_delete = head_;
        }
        length_ = 0;
    }

    bool LinkedList::Insert(TestData data, size_t position) {
      
        if (position == 0) {
            head_ = new Node<TestData>(std::move(data), head_);

        }
        else {

            auto* current = GetNode(position - 1);
            if (current == nullptr)return false;
            current->SetNextNode(
                new Node<TestData>(std::move(data), current->GetNextNode()));
        }

        length_++;
        return true;
    }

    // 根据数据找节点
    // 如果找到最后没有，返回值等于length_
    int LinkedList::Find(int data) {
        auto* current = head_;
        size_t position = 0;
        while (current!=nullptr) {
            if (current->GetData().GetData() == data)break;
            current = current->GetNextNode();
            position++;
        }
        return position;
    }

    void LinkedList::Delete(size_t position) {
        if(position==0) {
            auto* to_delete = head_;
            head_ = to_delete->GetNextNode();
            delete to_delete;
            
        }
        else {
            
            auto* current = GetNode(position - 1);
            if(current==nullptr)return;
            auto* to_delete = current->GetNextNode();
            if (to_delete == nullptr)return;
            current->SetNextNode(to_delete->GetNextNode());
            delete to_delete;
        }

        length_--;
    }

    bool LinkedList::SetData(TestData data, size_t position) {
        auto* target = GetNode(position);
        if (target == nullptr)return false;
        target->SetData(std::move(data));
        return true;
    }
}
