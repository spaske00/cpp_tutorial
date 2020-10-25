#include<iostream>
class heap_int_t {
public:
    heap_int_t(int value)
    : m_data(new int(value)) {
        std::cout << __PRETTY_FUNCTION__ << *m_data << '\n';
    }

    // obrisemo copy-ctr i copy-assign
    heap_int_t(const heap_int_t&) = delete;
    heap_int_t& operator=(const heap_int_t&) = delete;

    ~heap_int_t() {
        std::cout << __PRETTY_FUNCTION__ <<  *m_data << '\n';

        delete m_data;
        m_data = nullptr;
    }
private:
    int *m_data = nullptr;
};


class heap_int_pair_t {
    heap_int_t a;
    heap_int_t b;
public:
    heap_int_pair_t(int x, int y) : a(x), b(y) {}
};

void safe() {
    heap_int_t k(3);
    // heap_int_t h = k; error: use of deleted function...
}

void safe2() {
    heap_int_pair_t t(1, 2);

    // heap_int_pair_t t2 = t; error use of deleted functions
}

int main() {
    safe();
    safe2();
    return 0;
}