#include <iostream>

template <typename T1, typename T2> 
int compare(const T1 &a, const T2 &b) {
  if (a < b) {
    return -1;
  }
  if (b < a) {
    return 1;
  }
  return 0;
}

template<typename T>
void swap(T &lhs, T& rhs) {
    T tmp = lhs;
    lhs = rhs;
    rhs = tmp;
}

template<int Value>
int add_with(int a) {
    return a + Value;
}

int add_with(int a) {
    return a + 3;
}

int main() 
{
    long long a = 3;
    float b = 1.3;
    std::cout << compare(a, b) << '\n';

    // int v = add_with(a); error
    int v1 = add_with<3>(a);
    int v2 = add_with<3*4 - 10>(a);

    return 0;
}