#include<iostream>
// C++ Primer 5th, Chpater 2.3.2

// Pokazivac: adresa objekta
// Pokazivac moze da ima vrednost koja je:
// 1) Adresa nekog objekta
// 2) Adresa odmah nakon nekog objekta (Deferenciranje je UB, ali moze da ima tu vrednost. Videcemo kasnije zasto)
// 3) nullptr
// Spec: Pokazivac na funkciju, o tome kasnije.

int main() {
    int a = 42;

    int *p = &a;
    return 0;
}