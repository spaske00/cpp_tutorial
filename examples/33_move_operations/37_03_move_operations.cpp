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
    //                                               heap
    // move ctor                                          int(2)
    heap_int_t(heap_int_t&& other) noexcept // other.m_data --------^  ^
    : m_data(other.m_data)  {  // m_data------------------------
        std::cout << __PRETTY_FUNCTION__ << '\n';

        other.m_data = nullptr; // other vise ne pokazuje na isti int. "Ukrali" smo sadrzaj
    }

    // move-assign
    heap_int_t& operator=(heap_int_t&& other) noexcept { // a = std::move(b); a = get();
        std::cout << __PRETTY_FUNCTION__ << '\n';
        if (this != &other) {
            delete m_data;
            m_data = other.m_data;
            other.m_data = nullptr;
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

void copy() {
    heap_int_t x(4);

    consume(x);
    // h nam ne treba vise...
}


void move() {
    heap_int_t x(4);

    consume(static_cast<heap_int_t&&>(x)); // consume(std::move(x));
    // h nam ne treba vise...
}

void temp_move() {
    consume(heap_int_t(3));
}
int main() {
    copy();
    std::cout << "--------------\n";
    move();
    std::cout << "--------------\n";
    temp_move();
    return 0;
}