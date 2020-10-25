#include<iostream>
#include<string>
#include<vector>

template<typename T1, typename T2>
struct pair {
    T1 first;
    T2 second;

    const T1& get_first() const {
        return first;
    }

    const T2& get_second() const {
        return second;
    }

};

int main() {
    pair<int, double> a; // struct pair_int_double { int first; double second; ... }

    pair<std::string, int> b;  // struct pair_std::string_int { std::string first; int second; }


    return 0;
}