#include <iomanip>
#include <iostream>  // umesto <stdio.h>
// FILE* stdout     ,     FILE* stdin
// std::ostream cout, std::istream cin
int main() {
  std::cout << "Hello, world!\n";

  int a = 42;
  std::cout << a << '\n';

  double b = 1.23456789;
  std::cout << b << '\n';

  bool c = true;
  std::cout << c << '\n';

  std::cout << std::boolalpha << c << '\n';  // std::boolalpha io manipulator

  std::cout << std::setprecision(3);
  std::cout << b << '\n';

  return 0;
}


// https://www.learncpp.com/cpp-tutorial/introduction-to-iostream-cout-cin-and-endl/
// C++ Primer 5th. Chapter 8
// https://en.cppreference.com/w/cpp/io/cout
// https://github.com/fmtlib/fmt
// 1) Domaci: Kakva je razlika izmedju << '\n' i << std::endl