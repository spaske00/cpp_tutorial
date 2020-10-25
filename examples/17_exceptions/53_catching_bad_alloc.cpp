#include<iostream>
#include<vector>

// C++ Primer 5th, Chapter 8.1

int main() {
    try {
        std::vector<double> vec(100'000'000'000ull);
    } catch(const std::bad_alloc& b) {
        std::cout << b.what() << '\n';
    }
    return 0;
}