#include <iostream>
#include <cmath>
#include <cassert>

// C++ Primer 5th, Chapter 14

struct v2 {
    float x;
    float y;
};
std::ostream& operator<<(std::ostream& out, v2 a) {
    return out << "[" << a.x << ", " << a.y << "]";
}

std::istream& operator>>(std::istream& in, v2& a) {
    return in >> a.x >> a.y;
}


void test1() {
    v2 x;
    std::cin >> x; // 2 1
    std::cout << x; // [2, 1]
}

v2 operator+(const v2 a, const v2 b) {
    v2 result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}

void test2() {
    v2 a, b;
    std::cin >> a >> b; // 2 1 0 3
    std::cout << (a + b); // [2, 4]
}

v2 operator-(const v2 a, const v2 b) {
    v2 result {
        a.x - b.x,
        a.y - b.y
    };
    return result;
}


float scalar(const v2 a, const v2 b) {
    return a.x * b.x + a.y * b.y;
}

v2 operator*(v2 a, float b) {
    return {a.x * b, a.y * b};
}

v2 operator*(float b, v2 a) {
    return {a.x * b, a.y * b};
}

v2 operator/(v2 a, float b) {
    return {a.x / b, a.y / b};
}

v2 operator/(float b, v2 a) {
    return {a.x / b, a.y / b};
}

float len(const v2 a) {
    return sqrt(scalar(a, a));
}

v2 unit(v2 a) {
    return a / len(a);
}


struct mat_2x2 {
    float m[4];

    float operator[](int i) const {
        assert(i >= 0 && i < 4);
        return m[i];
    }
};
// |0 1|
// |2 3|

std::ostream& operator<<(std::ostream& out, const mat_2x2& a) {
    return out << "|" << a[0] << " " << a[1] << "|\n|" << a[2] << " " << a[3] << "|";
}

v2 operator*(const mat_2x2& m, v2 a) {
    return {m[0] * a.x + m[1] * a.y, m[2] * a.x + m[3] * a.y};
}

float cos_theta(const v2& a, const v2& b) {
    return scalar(a, b) / (len(a) * len(b));
}

int main() {
    mat_2x2 m{2, 0,
              0, 1};
    v2 a{1, 0};

    v2 b{0, 2};

    std::cout << (a + b) << '\n';
    std::cout << (a - b) << '\n';

    std::cout << (len(a)) << '\n';
    std::cout << (a * 3) << '\n';
    std::cout << (a / 4) << '\n';
    std::cout << m << '\n' << a << '\n';

    std::cout << m * a << '\n';   

    operator+(a, b);
    
    return 0;
}