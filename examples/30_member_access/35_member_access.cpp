#include<iostream>

// C++ Primer 5th, Chapter 7, Chpater 13
struct my_type_t {
public:
    int m_public_data;
    double m_public_data_2;
private:
    int m_value;
};

int main() {
    my_type_t t;

    // t.m_value = 3;
    t.m_public_data = 10;
    return 0;
}