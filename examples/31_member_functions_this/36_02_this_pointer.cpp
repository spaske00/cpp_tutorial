#include <iostream>

                                                                //Kompajler
class modulo_int {                                              //   struct modulo_int {
     int m_modulo;                                              //       int m_modulo;
     int m_value;                                               //       int m_value;
                                                                //    };
public:
    modulo_int(int m) : m_modulo(m), m_value(0) {}              // void modulo_int_ctor(modulo_int* const this) { 
                                                                //   this->m_modulo = m; this->m_value = 0; // body
                                                                // }
    void add(int x) {                                           // void add(modulo_int* const this, int x) {
        m_value = (m_value + x) % m_modulo;                     //    this->m_value = (this->m_value + x) % m_modulo;
    }                                                           // }

    int get() const {   
        // m_modulo = 3; // error                               // int get(const modulo_int* const this) { 
        return this->m_value;                                   //     return this->m_value;
    }                                                           // }
};

int main() {
    modulo_int i(5);                      // modulo_int i;
                                          // modulo_int_ctor(&i);                       
    // i.m_modulo = 1; // error
    i.add(6);                             // add(&i, 6);
    std::cout << i.get() << '\n';         // get(&i);
    i.add(7);                             // add(&i, 7);
    std::cout << i.get() << '\n';         // get(&i);
    return 0;
}
/*
modulo_int::modulo_int(int):                    # @modulo_int::modulo_int(int)
        movl    %esi, (%rdi)
        movl    $0, 4(%rdi)
        retq
modulo_int::add(int):                  # @modulo_int::add(int)
        movl    %esi, %eax
        addl    4(%rdi), %eax
        cltd
        idivl   (%rdi)
        movl    %edx, 4(%rdi)
        retq
modulo_int::get() const:                 # @modulo_int::get() const
        movl    4(%rdi), %eax
        retq



modulo_int_ctor(modulo_int*, int):      # @modulo_int_ctor(modulo_int*, int)
        movl    %esi, (%rdi)
        movl    $0, 4(%rdi)
        retq
add(modulo_int*, int):                   # @add(modulo_int*, int)
        movl    %esi, %eax
        addl    4(%rdi), %eax
        cltd
        idivl   (%rdi)
        movl    %edx, 4(%rdi)
        retq
get(modulo_int const*):                   # @get(modulo_int const*)
        movl    4(%rdi), %eax
        retq

*/