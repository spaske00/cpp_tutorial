#include <iostream>


int main() {
  int i = 42;
  int &r = i;

  // int &r1 = i * 42; // error l-value reference ne moze vezati za l-value
  int &&r = i * 42; // ok izraz je r-value
  const int& r3 = i * 42; // const-l-value reference mozemo vezati za r-value

  // int &&rr = i; // error

  int && r = i * 42;

  std::string s("abcd");
  s[1] = 'g'; // s[i] vraca char&.


  int &&rr1 = 42;
  // int &&rr2 = rr1;
  return 0;
}