#include <iostream>
// C++ Primer 5th, Chapter 7
// object:
//
struct my_type_t {
  // ctor
  my_type_t() {
    // prikupti sve potrebne resurse
    std::cout << "my_type_t()\n";
  }

  // dtor
  ~my_type_t() {
    // oslobodi sve drzane resurse
    std::cout << "~my_type_t()\n";
  }
};

int main() {
  my_type_t t;
  my_type_t x(); // vodite racuna!
  return 0;
}