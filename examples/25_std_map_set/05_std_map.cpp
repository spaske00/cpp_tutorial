#include <iostream>
#include <map>

// https://en.cppreference.com/w/cpp/container/map

struct point_t {
  int a;
  int b;
};

std::ostream &operator<<(std::ostream &out, const point_t &r) {
  return out << "(" << r.a << ", " << r.b << ")";
}

#if 1
bool operator<(const point_t &lhs, const point_t &rhs) {
  if (lhs.a == rhs.a) {
    return lhs.b < rhs.b;
  }
  return lhs.a < rhs.a;
}
#endif

// erase, emplace, find O(logn)
int main() {
  std::map<int, std::string> m;
  m[0] = std::string("Hello");
  m[4] = std::string("World!");
  m[1] = std::string(", ");

  for (const auto &e : m) {
    std::cout << e.first << ' ' << e.second << '\n';
  }
  std::cout << "------------------------\n";
  m[3]; 

  for (const auto &e : m) {
    std::cout << e.first << ' ' << e.second << '\n';
  }
  std::cout << "------------------------\n";

  // Da li postji element sa zadatim kljucem?
  auto it = m.find(3);
  if (it == m.end()) {
    std::cout << "Ne posotji!\n";
  } else {
    std::cout << "Posotji: " << it->first << ' ' << it->second;
  }
  std::cout << "------------------------\n";

  // Brisanje elemenata
  // m.erase(it); it mora biti validan i dereferencijabilan

  m.erase(3);
  for (const auto &e : m) {
    std::cout << e.first << ' ' << e.second << '\n';
  }

  std::cout << "------------------------\n";

  m.emplace(-2, "0000 ");

  for (auto it = m.begin(); it != m.end(); ++it) {
    std::cout << it->first << ' ' << it->second << '\n';
  }

  std::cout << m.size() << '\n';

  std::cout << "------------------------\n";

  m[0] = "Nista\n";

  for (auto it = m.begin(); it != m.end(); ++it) {
    std::cout << it->first << ' ' << it->second << '\n';
  }

  std::cout << m.size() << '\n';

  std::cout << "--------------------\n";

  std::map<point_t, std::string> points;
  points[{1, 2}] = "A";
  points[{2, 3}] = "B";
  points[{-1, 4}] = "C";

  for (const auto &e : points) {
    std::cout << e.first << ' ' << e.second << '\n';
  }
  return 0;
}