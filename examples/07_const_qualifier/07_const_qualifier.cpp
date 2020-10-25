#include<iostream>

// C++ Primer 5th, Chapter 2.4

// const: uz definiciju promenljive znaci da vrednost jednom inicijalizovana ne moze da se menja
// T* => je konvertibilan u const T*. Obrnuto ne vazi

int main() {
    const int a = 42;
    // a = 0; error

    // int* p = &a; error. a je const int
    int const *p = &a; // citamo p je pokazivac na const int. Sa desna na levo. 

    // Pokazivac pokazuje na nesto sto ne moze da se menja
    // *p = 0; error
    // Ali pokazivac moze da se promeni jer nije konstant.

    int b = 3;
    p = &b;

    // p sada pokazuje na b.

    int* const p2 = &b; // p2 je konstant pokazivac na int. Znaci da p2 ne moze da pokazuje na nesto drugo
    // ali moze da menja ono na sta pokazuje
    *p2 = 4;

    const int c = 0;
    int const* const p3 = &a; // p3 je konstant pokazivac na konstant int.
    // *p3 = 0; error
    // p3 = &c; error

    return 0;
}