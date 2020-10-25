#include<iostream>
#include<vector>

// C++ Primer 5th, Chapter 2.5

// auto dedukuje tip. Moze naci u definiciji lokalnih i globalnih promenljivih.
// Ne moze kao parametar funkcije ili clan klase.

int main() {
    auto i = 23; // i je int

    int c = 42;
    auto m = c; // m je int

    auto p = &c; // p je int*

    std::vector<int> vec{1,2,3,4,5};

    auto x = vec; // x je std::vector<int>

    const auto& y = vec;

    auto& r = p;

    std::vector<std::string> s;
    for (const auto& e : s) {
        // 
    }

    for (auto& e : s) {

    }
    return 0;
}
// Scot Mayers: Effective Modern C++. Understand auto