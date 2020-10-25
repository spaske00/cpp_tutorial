#include <iostream>
#include <vector>

// C++ Primer 5th, Chapter 3.3, Chpater 9


// std::vector
// stack                            heap
// // xs {                         [0,1,42,23,14,54,-3,4, , , , , , , ]
//     T* data; --------------------^
//     size_t size; -------------------------------------^
//     size_t capacity; -----------------------------------------------^
// }

int main() {
  std::vector<int> xs;
  std::cout << "xs.size()"
            << " " << xs.size() << '\n';

  std::cout << "xs.capacity()"
            << " " << xs.capacity() << "\n\n";

  xs.push_back(42);
  xs.push_back(12);
  xs.push_back(14);

  std::cout << "After 3 push_back\n\n";
  std::cout << "xs.size()"
            << " " << xs.size() << '\n';

  std::cout << "xs.capacity()"
            << " " << xs.capacity() << '\n';

  // prilikom push_back u slucaju da je size() == capacity() vector alocira
  // veci bafer, kopira element po element u novi bafer, i zatim oslobadja stari

  xs.push_back(15);
  xs.push_back(12);
  std::cout << "After 5 push_back\n\n";
  std::cout << "xs.size()"
            << " " << xs.size() << '\n';

  std::cout << "xs.capacity()"
            << " " << xs.capacity() << '\n';

  xs[0] = 1;

  // cesta greska xs[i] i >= size() => Nedefinisano ponasanje

  xs.front();  // xs[0]
  xs.back();   // xs[xs.size() - 1]

  std::cout << "for loop print: ";
  for (size_t i = 0; i < xs.size(); ++i) {
    int& c = xs[i];
    std::cout << c << ' ';
  }

  std::cout << '\n';
  std::cout << "foreach loop print: ";
  for (int c : xs) {
    std::cout << c << ' ';
  }

  std::cout << '\n';

  for (int& c : xs) {
    c = 0;
  }
  std::cout << '\n';
  std::cout << "after c = 0: ";
  for (int c : xs) {
    std::cout << c << ' ';
  }
  std::cout << '\n';
  std::vector<int> ys{1, 2, 3, 4, 5, 6, 7, 8};

  xs = ys;

  xs[0] = 1000;

  std::cout << "xs: ";
  for (int c : xs) {
    std::cout << c << ' ';
  }
  std::cout << '\n';
  std::cout << "ys: ";
  for (int c : ys) {
    std::cout << c << ' ';
  }
  std::cout << '\n';


  // Neki konstruktori
  std::vector<int> zs1(100); // vector velicine 100, default inicijalizovan (int = 0)
  std::vector<int> zs2(100, 42); // vector velicine 100, svi elementi inicijalizovani na 42
  std::vector<int> zs3(ys); // zs3 copy-inicijalizovan elementima ys
  

  // danger
  std::vector<int> danger;
  danger.push_back(1);

  int* danger0 = &danger[0];
  auto danger1 = danger.begin();

  for (int i = 0; i < 100; ++i) {
    danger.push_back(i);
  }
  std::cout << "Danger: " << (danger0 == &danger[0]) << '\n';

  return 0;
}