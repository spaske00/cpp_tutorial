#include<iostream>

struct simple_type_t {
    int m_a;
    simple_type_t() {
        std::cerr << __PRETTY_FUNCTION__ << m_a << '\n';
    }
    simple_type_t(int a) : m_a(a) {
        std::cerr << __PRETTY_FUNCTION__ << m_a << '\n';
    }
    ~simple_type_t() {
        std::cerr << __PRETTY_FUNCTION__ << m_a << '\n';
    }
};

simple_type_t s(0);

void f() {
    static simple_type_t s1(1);
}

void g() {
    simple_type_t s3(3);
}
int main() {
    f();
    std::cerr << "--------------\n";
    g();
    std::cerr << "--------------\n";

    {
        simple_type_t* p1 = new simple_type_t(3);
        simple_type_t* p2 = new simple_type_t[2];

        delete p1;
        delete[] p2;
    }

    std::cerr << "--------------\n";
    {
        simple_type_t* p3 = new simple_type_t(3);
        simple_type_t* p4 = new simple_type_t[2];
    }
    // std::unique_ptr
    // std::shared_ptr
    return 0;
}