#include<iostream>

// C++ Primer 5th, Chapter 2.4

// Referencu mozemo 'vezati' za const objekat
// Da bi to uradili, definisemo referencu na const

// (const T) => citamo zajedno kao jedan tip.
// Terminologija: cesto se vidi referenca na const ili const referenca. Znace istu stvar.
int main() {
    int i = 2;

    const int& r = i;
    // r = 2; error
    // int const &r = i;

    const int ci = 42;
    // int const ci = 42;
    const int& r1 = ci; // r1 je referenca na const int.
    // int const& r1 = ci;

    const int& r2 = ci * r1; // referenca na const moze biti inicijalizovana r-vrednoscu. 
    // Pokazivac moze biti inicijalizovan samo l-vrednoscu


    const int& r3 = 42;
    return 0;
}