#include<iostream>

// C++ Primer 5th, Chapter 7
struct my_type_t {
    int m_a;
    my_type_t(int a) : m_a(a) {
        // m_a = a;
        // kada pocen izvrsavanje konstruktura sve promenljive clanice su vec inicijalizovane
        // prikupti sve potrebne resurse
        std::cout << "my_type_t(" << m_a << ")\n";
    }
    
    ~my_type_t() {
        // oslobodi sve drzane resurse
        std::cout << "~my_type_t(" << m_a << ")\n";

    }
};
void f() {
    my_type_t t(42);
    my_type_t x(-1);
    int a = 4;
}
my_type_t t0(0);

int main() {
    my_type_t t1(1);
    {
        my_type_t t2(2); // objekti se unistavaju na kraju opsega u kom su definisani
        int a = 4;
    }
    f();
    return 0;
}