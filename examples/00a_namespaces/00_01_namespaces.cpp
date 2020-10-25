#include<iostream>
void lib1_v1_f();

void lib2_v2_f();
void lib2_v2_g();

namespace lib1_v1 {
void f() {}
}; // namespace lib1_v1



namespace lib2_v1 {
void f() {}

void g(double x) {}
}; // namespace lib2_v1

namespace lib1_v2 {
void f() {}

// ubaceno u lib1_v2
void g(int x) {}
}; // namespace lib1_v1


int main() {
  lib1_v1::f();
  lib2_v1::f();
  lib2_v1::g(1);

  std::cout << "Hello, World!\n";

    using namespace std;

    {
        //using namespace lib1_v1;
        using namespace lib1_v2;
        using namespace lib2_v1;
        g(1); // lib2_v1::g(1); zelimo da pozovemo 
    }
  return 0;
}