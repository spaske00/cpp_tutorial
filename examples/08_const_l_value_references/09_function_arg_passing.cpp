#include <iostream>

struct really_big_object_t {
  unsigned char memory[64000];
};

// prenos po vrednosti, kopira svih 64K 
void no_no(really_big_object_t v) {

}

void really_big_object_read_only(const really_big_object_t& r) {
  // read here
}

void really_big_object_read_write(really_big_object_t& r) {}

// primitive types read only
void primitive_types_read_only(int a, char c, double b) {
  //
}

void primitive_types_read_write(int& a, char& c, double& d) {
  //
}