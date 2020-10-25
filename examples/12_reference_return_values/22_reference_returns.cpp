#include<string>
#include<iostream>

// C++ Primer 5th, Chapter 6.3


char& get_val(std::string& s, size_t i) {
    return s[i];
}

int main() {
    std::string x("hello");
    get_val(x, 0) = 'K';
    std::cout << x << '\n';
    return 0;
}