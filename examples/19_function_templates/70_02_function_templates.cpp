#include<iostream>


template<typename T> 
T max(T a, T b) {
    return a < b ? b : a;
}

struct day_t {
    int m_value;
};
bool operator<(const day_t& lhs, const day_t& rhs) {
    return lhs.m_value < rhs.m_value;
}

int main() {
    long long a = 1;
    long long b = 2;

    std::cout << max(a, b) << '\n';

    float x = 3.14;
    float y = 4.15;
    std::cout << max(x, y) << '\n';

    day_t d1, d2;
    d1.m_value = 1;
    d2.m_value = 2;

    day_t m = max(d1, d2);
    std::cout << m.m_value;

    return 0;
}