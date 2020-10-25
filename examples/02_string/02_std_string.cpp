#include <iostream>
#include <string>

#define nl() std::cout << "\n\n"
int main() {
  std::string s1;  // prazan string
  std::string x = "hello";
  std::string y(4, 'c');

  s1.append("Hello, world!");  // nadovezuje na kraj

  std::cout << s1 << '\n';
  nl();

  s1[0] = '!';  // stringovi su mutabilini (nasuprot Java stringova koji
                // su imutabilini)

  std::cout << s1 << '\n';

  nl();
  std::cout << "s1.size() " << s1.size() << '\n';  // trenutna velicina string-a

  std::cout << "s1.capacity() " << s1.capacity()
            << '\n';  // trenutni kapacitet. Govori koliko karaktera moze da se
                      // doda pre realokacije

  nl();
  s1.append("\nAnother line!");

  std::cout << "s1.capacity() " << s1.capacity()
            << '\n';  // kapacitet se duplirao. string je zaduzen da vodi racuna
                      // o potrebnoj memoriji.

  std::string s2 = s1;  // copy inicijalizujemo string s2 sadrzajem stringa s1
  // s1 i s2 su dva objekta
  nl();
  s2[0] = 'H';
  std::cout << s1 << "\n\n" << s2 << '\n';
  nl();
  // iteriranje kroz karaktere stringa
  for (size_t i = 0; i < s1.size(); ++i) {
    char c = s2[i];
    std::cout << c << ' ';
  }

  nl();
  std::cout << '\n';
  // ekvivalent
  for (char c : s2) {
    std::cout << c << ' ';
  }
  nl();
  
  // iterator
  std::string s3 = "012345";

  // iterator je tip koji zna da kako da obidje sve elemente kontejnera
  // osnovi iterator za svaki kontejner c.begin() ili std::begin(c)
  // c.end() je granicnik koji predstavlja kraj elemenata kolekcije
  for (std::string::iterator it = s3.begin(); it != s3.end(); ++it) {
    std::cout << *it << '\n';
  }
  nl();
  // pozicija na kojoj se nalazi trazena niska
  std::cout << "s3.find(\" 34\"): " << s3.find("34") << '\n';
  nl();
  // ako ne postoji
  std::cout << "(s3.find(\"abc\") == std::string::npos): "
            << (s3.find("abc") == std::string::npos) << '\n';
  return 0;
}

// https://en.cppreference.com/w/cpp/string/basic_string
// C++ Primer 5th, Chapter 3, 3.2
// https://www.learncpp.com/cpp-tutorial/4-4b-an-introduction-to-stdstring/
