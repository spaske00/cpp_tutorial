#include<iostream>
#include<string>
#include<vector>
// Pravilo 0: Ako je moguce pustiti da kompajler generise dtor, copy-ctor, copy-assign, move-ctor, move-assign
// Pravilo 3: Ako sami definsemo neki od: dtor, copy-assign, copy-ctor onda bi treblao da definisemo i ostala dva
// Pravilo 5: Ako sami definsemo neki od: dtor, copy-assign, copy-ctor, move-ctor, move-assign onda bi trebalo sami da definisemo i ostale

// Scott Mayers: Effective modern C++. Understand special member function generation

class person_t {
    std::string m_name;
    int m_age;
    std::vector<std::string> m_family;
    // kompajler automatski generise specijalne operacije koje izvode pojedinace
    // copy, move, dtor operacije podobjekata
    
}; 