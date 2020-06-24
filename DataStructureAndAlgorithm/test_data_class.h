#pragma once
#include <utility>

class TestData
{
    int data_;
public:
    explicit TestData(int data = 0): data_(data) { }

    TestData(const TestData& another) {
        data_ = another.data_;
    };

    TestData(TestData&& another) noexcept
        : TestData() {
        swap(*this, another);
    }

    TestData& operator=(TestData another) {
        swap(*this, another);
        return *this;
    };

    friend void swap(TestData& dest, TestData& src) noexcept {
        using std::swap;
        swap(dest.data_, src.data_);
    }

    ~TestData() { data_ = 0; }

    int GetData() const { return data_; };

    void SetData(int data) { data_ = data; };
};
