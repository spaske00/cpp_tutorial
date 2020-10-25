#include <iostream>
#include <string>

// https://www.learncpp.com/cpp-tutorial/5-10-stdcin-extraction-and-dealing-with-invalid-text-input/
// C++ Primer 5th, Chapter 8

int main() {
  int a, b;
  std::cin >> a >> b;  // scanf("%d%d", &a, &b);
  std::cout << a << ' ' << b << '\n';

  std::string s1;
  std::cin >> s1;  // Hello, World! How Are you?

  std::cout << s1 << '\n';  // Hello,

  std::getline(std::cin, s1);
  std::cout << s1 << '\n';
  return 0;
}