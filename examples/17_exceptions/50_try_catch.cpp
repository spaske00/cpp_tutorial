#include<iostream>
#include<exception>
#include<fstream>
// runtime_error, range_error, overflow_error, underflow_error, logic_error, domain_error
// izeuzci. Mehanizam za obradu gresaka
// 

// C++ Primer 5th, Chapter 8.1

int main(int argc, const char**) {
    try {
        std::cout << "Inside try:\n";
        if (argc > 1) {
            throw 4;
        }
        std::cout << "end try: \n";
    } catch (int c) {
        std::cout << "catch " << c << '\n';
    }
    return 0;
}