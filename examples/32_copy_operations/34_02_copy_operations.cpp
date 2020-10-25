#include<iostream>

class heap_int_unsafe_t {
public:
    heap_int_unsafe_t(int value)
    : m_data(new int(value)) {
    }

    ~heap_int_unsafe_t() {
        delete m_data;
        m_data = nullptr;
    }
private:
    int *m_data = nullptr;
};

void unsafe() {                                 // heap
    heap_int_unsafe_t h(4); //--------------------> int(4)
    { //                                             ^
        heap_int_unsafe_t t = h; // -----------------|

    }// t obrise int ovde <-
} // h obrise int ovde ponovo => double free -> :( UB


int main() {
    unsafe();
    return 0;
}