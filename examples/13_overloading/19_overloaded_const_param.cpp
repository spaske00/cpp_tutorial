#include<iostream>

// C++ Primer 5th, Chapter 6.4


void print_line(const std::string& s1) {
    std::cout << __PRETTY_FUNCTION__ << '\n';
    std::cout << s1 << '\n';
}

void print_line(std::string &s1) {
    std::cout << __PRETTY_FUNCTION__ << '\n';
    std::cout << s1 << '\n';
}

int main() {
    std::string s1("Hello");
    const std::string s2("World!");
    print_line(s1); // poziva print_line(std::string&);
    print_line(s2); // poziva print_line(const std::string&);
    print_line(std::string("what now?")); // poziva print_line(const std::string&);
    print_line("and now?"); // poziva print_line(const std::string&)
    return 0;
}