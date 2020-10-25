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
        std::cout << __PRETTY_FUNCTION__ << '\n';
        delete m_data;
        m_data = nullptr;
    }
private:
    int *m_data = nullptr;
};

void consume(heap_int_t h) {
    // uradi nesto sa h i onda oslobodi
}

int main() {
    
    heap_int_t x(4);

    consume(x);
    // h nam ne treba vise...
    return 0;
}