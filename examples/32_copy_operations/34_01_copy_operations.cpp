#include<iostream>
class modulo_int {
    int m_modulo;
    int m_value;
public:
    modulo_int(int m) : m_modulo(m), m_value(0) {}

    void add(int x) {
        m_value = (m_value + x) % m_modulo;
    }

    int get() const {
        return m_value;
    }
};

int main() {
    modulo_int a(4);
    modulo_int b(3);

    b = a; // copy sve iz a u b.
    modulo_int c = b; // <=> modulo_int c(b);
    return 0;
}