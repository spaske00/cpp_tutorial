#include <iostream>

// C++ Primer 5th, Chapter 6.4

void print_line(const char *beg) {
  std::cout << __PRETTY_FUNCTION__ << '\n';
  std::cout << beg << '\n';
}

void print_line(const char *beg, const char *end) {
  std::cout << __PRETTY_FUNCTION__ << '\n';
  for (; beg != end; ++beg) {
    std::cout << *beg;
  }
  std::cout << '\n';
}

void print_line(const char *beg, size_t n) {
  std::cout << __PRETTY_FUNCTION__ << '\n';

  for (size_t i = 0; i < n; ++i) {
    std::cout << beg[i];
  }
  std::cout << '\n';
}

void print_line(const std::string &s) {
  std::cout << __PRETTY_FUNCTION__ << '\n';

  std::cout << s << '\n';
}

int main() {
  char s1[] = "Hello world!";
  print_line(s1);
  print_line(s1, s1 + 4);
  print_line(s1, 4);
  print_line(std::string("Hello!"));
  return 0;
}
