#include <exception>
#include <iostream>
struct raii_t {
  int m_i;
  raii_t(int i) : m_i(i) { std::cout << __PRETTY_FUNCTION__ << m_i << '\n'; }

  ~raii_t() { std::cout << __PRETTY_FUNCTION__ << m_i << '\n'; }
};

void f3() {
  std::cout << "Begin f3\n";
  throw std::runtime_error("runtime!");
  raii_t x(-1);
  std::cout << "End f3\n";
}

void f2() {
  std::cout << "Begin f2\n";
  try {
    raii_t r(2);
    f3();
    std::cout << "NeverReached!\n";
    raii_t x(-1);
  } catch (const std::range_error &e) {
    std::cout << "const std::range_error& e\n";
  } catch (const std::string &s) {
    std::cout << "const std::range_error& e\n";
  }
  std::cout << "ENd f2\n";
}

void f1() {
  std::cout << "Begin f1\n";

  try {
    raii_t r(1);
    f2();
    std::cout << "NeverReached!\n";
    raii_t x(-1);

  } catch (const std::logic_error &e) {
    std::cout << "const std::logic_error& e\n";
  }
  std::cout << "End f1\n";
}

int main() {
  std::cout << "Begin main\n";

  raii_t r(4);
  try {
    std::cout << "Begin main_try\n";
    f1();
    std::cout << "End main_try\n";
  } catch (const std::runtime_error &err) {
    std::cout << "const std::runtime_error& err\n";
  }
  std::cout << "End main\n";

  return 0;
}