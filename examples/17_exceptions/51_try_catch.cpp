#include<iostream>
#include<exception>
#include<fstream>
// runtime_error, range_error, overflow_error, underflow_error, logic_error, domain_error
// izeuzci. Mehanizam za obradu gresaka
// 

// C++ Primer 5th, Chapter 8.1

void g() {
    throw std::logic_error("g()");
}

void f() {
    g();
    std::cout << "Nothing!\n";
}

int main(int argc, const char**) {
    try {
        std::cout << "begin\n";
        f();
        std::cout << "end\n";
    } catch (const std::logic_error& c) {
        std::cout << "catch " << c.what() << '\n';
    }
    return 0;
}