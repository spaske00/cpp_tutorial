#include<iostream>

// C++ Primer 5th, Chapter 6.5


void print_line(const std::string& s1 = "") {
    std::cout << __PRETTY_FUNCTION__ << '\n';
    std::cout << s1 << '\n';
}

// Nakon prvog parametara kome je zadata podrazumevana vrednost se ne moze naci parametar bez podrazumevane vrednosti
int add(int a = 0, int b = 0) {
    return a + b;
}

// int sub (int a = 0, int b) error

int main() {
    std::string x("Hello");
    
    print_line(x);
    print_line();
    std::cout << add() << '\n';
    std::cout << add(1) << '\n';
    std::cout << add(2, 3) << '\n';
    return 0;
}