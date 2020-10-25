#include<iostream>
// arr[0] = 3;
// arr.size()
// arr = arr2
// arr.begin()
// arr.end()
// arr.at(1)


// cppreference.com

template<typename T, size_t Size>
class array {
    T data[Size];
public:
    T& operator[](size_t i) {  // T& operator[](array* const this, size_t i) { return this->data[i]; }
        return data[i];
    }

    const T& operator[](size_t i) const { // const T& operator[](const array* const this, size_t i ) { return this->data[i]; }
        return data[i];
    }

    size_t size() const {
        return Size;
    }

    T& at(size_t i) {
        if (i >= Size) {
            throw std::out_of_range("out of range");
        }
        return data[i];
    }

    const T& at(size_t i) const {
        if (i >= Size) {
            throw std::out_of_range("out of range");
        }
        return data[i];
    }

    T* begin() { return data; }
    T* end() { return data + Size; }

    const T* begin() const { return data; }
    const T* end() const { return data + Size; }

};
struct raii_t {
    int m_value;
    raii_t() {
        std::cout << __PRETTY_FUNCTION__ << m_value << '\n';
    }

    ~raii_t() {
        std::cout << __PRETTY_FUNCTION__ << m_value << '\n';
    }
};
int main() {
    array<raii_t, 5> arr;
    int i = 0;
    for (auto& e : arr) {
        e.m_value = ++i;
    }

    return 0;
}