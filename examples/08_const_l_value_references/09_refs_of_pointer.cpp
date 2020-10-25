#include<iostream>

// C++ Primer 5th, Chapter 2.4

// Pokazivac je objekat.
// Referenca nije objekat vec samo drugo ime za postojeci objekat.
// Mozemo napraviti referencu na pokazivac

int main() {
    int a = 42;
    int *p = &a;

    int* &r = p; // citamo spiralno. r je referenca, na, pokazivac, na int. Nesrecna sintaksa. Sta da se radi...
    *r = 0;

    std::cout << a << ' ';
    return 0;
}