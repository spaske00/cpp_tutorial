#include <iostream>
struct my_type_t {
  int m_a;
  my_type_t(int a) : m_a(a) { std::cout << "my_type_t(" << m_a << ")\n"; }

  ~my_type_t() { std::cout << "~my_type_t(" << m_a << ")\n"; }
};

struct composed_t {
  my_type_t t1;
  my_type_t t2;

  composed_t() : t2(2), t1(1)  { std::cout << "composed_t()\n"; }
  ~composed_t() { std::cout << "~composed_t()\n"; }
};

int main() {
  std::cout << "begin\n";
  {
    composed_t t;
    int a = 4;
  }
  std::cout << "end\n";
  return 0;
}