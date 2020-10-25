#include <iostream>
class heap_int_t {
public:
    heap_int_t(int value)
    : m_data(new int(value)) {
        std::cout << __PRETTY_FUNCTION__ << '\n';
    }
     /////////////////////////////////////heap    int()   --->int()
    // copy-ctor                                      ^   | 
    heap_int_t(const heap_int_t& other) // heap_int_t a = b; heap_int_t a(b);
    : m_data(new int(*other.m_data)) {
        std::cout << __PRETTY_FUNCTION__ << '\n';
    }
    //                                  int(staro) <del----new> int(4)    int(4)
    // copy-assign                                      |   -----------------^
    heap_int_t& operator=(const heap_int_t& other) { // a = b;   a = b = c;
        std::cout << __PRETTY_FUNCTION__ << '\n';
        if (this != &other) {
            delete m_data;
            m_data = new int(*other.m_data);
        }
        return *this;
    }

    ~heap_int_t() {
        delete m_data;
        m_data = nullptr;
    }
private:
    int *m_data = nullptr;
};

void safe() {                             // heap
    heap_int_t h(4); // -------------------> int(4) <-------
    {//                                                    |
        heap_int_t x = h; // --------------> int(4)        |
    } // x oslobodi --------------------------^            |
} // h oslobodi --------------------------------------------

void safe2() {
    heap_int_t k(1); // -------------------> int(1)<-(2)-| => int(1)
    heap_int_t r(2); // -------------------> int(2)      |
    k = r; // ----------------------------------------
}

int main() {
    safe();
    safe2();
    return 0;
}