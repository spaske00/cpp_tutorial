#include<iostream>
#include<exception>
#include<vector>


// exceptions
// logic_error, runtime_error, bad_alloc
// 

// C++ Primer 5th, Chapter 8.1

struct raii_t {
    raii_t() {
        std::cerr << __PRETTY_FUNCTION__ << '\n';
    }

    ~raii_t() {
        std::cerr << __PRETTY_FUNCTION__ << '\n';
    }
};

void test1(int a) {
    try {
        if (a) throw 2;
        else throw std::string("Nope"); 

        raii_t x;
    } catch (int e) {
        std::cout << e << '\n';
    } catch (std::string f) {
        std::cout << f << '\n';
    }
}

void test2(int a) {
    raii_t r1;
    try {
        raii_t r2;
        int* alloc = new int[42];
        if (a) {
            throw std::logic_error("Must be false");
        } 
        // leaks memory
        delete[] alloc;
    } catch (const std::logic_error& l) {
        std::cout << l.what() << '\n';
    }
}

int main() {

    test1(2);
    test1(0);
    test2(1);
    return 0;
}