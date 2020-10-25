#include <iostream>

// 
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
    modulo_int i(5);
    // i.m_modulo = 1; // error
    i.add(6);
    std::cout << i.get() << '\n';
    i.add(7);
    std::cout << i.get() << '\n';

    modulo_int k(4);
    k.add(3);

    const modulo_int m(10);
    // modulo_int.add(3); error. Non const funkcija ne moze biti pozvana nad const objektom
    return 0;
}
