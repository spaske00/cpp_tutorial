#include <set>
// https://en.cppreference.com/w/cpp/container/set

struct point_t {
  int a;
  int b;
};
std::ostream &operator<<(std::ostream &out, const point_t &r) {
  return out << "(" << r.a << ", " << r.b << ")";
}

#if 0
bool operator<(const point_t &lhs, const point_t &rhs) {
  if (lhs.a == rhs.a) {
    return lhs.b < rhs.b;
  }
  return lhs.a < rhs.a;
}
#endif

// erase, emplace, find O(logn)

int main() {
  std::set<int> s;
  s.emplace(1);
  s.emplace(4);
  s.emplace(2);
  s.emplace(1);

  for (const auto &e : s) {
    std::cout << e << ' ';
  }
  std::cout << "------------------------\n";

  // Da li postji element sa zadatim kljucem?
  auto it = s.find(3);
  if (it == s.end()) {
    std::cout << "Ne posotji!\n";
  } else {
    std::cout << "Posotji: " << *it << "\n";
  }
  std::cout << "------------------------\n";

  // Brisanje elemenata
  // s.erase(it); 

  s.erase(2);
  for (const auto &e : s) {
    std::cout << e << ' ';
  }

  std::cout << "------------------------\n";

  s.emplace(-2);

  for (auto it = s.begin(); it != s.end(); ++it) {
    std::cout <<*it << '\n';
  }

  std::cout << s.size() << '\n';

  std::cout << "--------------------\n";

  std::set<point_t> points;
  points.emplace(point_t{1, 2});
  points.emplace(point_t{2, 1});
  points.emplace(point_t{1, 2});

  for (const auto &e : points) {
    std::cout << e << '\n';
  }
  return 0;

  return 0;
}