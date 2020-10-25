#include <iostream>
#include <string>

int main() {
  std::string buffer;
  
  // hello:world:!:how:are:you?:
  while (std::getline(std::cin, buffer, ':')) {
    std::cout << buffer << '\n';
  }
  
  return 0;
}