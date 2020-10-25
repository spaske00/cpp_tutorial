#include <iostream>

// C++ Primer 5th, Chapter 2.3.1

// Slozeni tip je tip koji je definisani preko drugih tipova
// Referenca definise alternativno ime za objekat
// Referencu "vezemo" za objekat kada je definisemo
// Jednom vezana, referenca ne moze da promeni objekat na koji referise
// U svakom izrazu, kada napisemo identifikator reference, semanticki, to je isto kao da smo naveli ime objekta koji referisemo
// Vrste: l-value i r-value reference

// Vazno: Referenca nije objekat! Vec samo drugo ime za postojeci objekat!

void change_nothing(int x) {
  x = 0;
}

void change(int &x) {
  x = 0;
}

int main() {
  int a = 4;

  // lvalue referenca na c
  // nije objekat
  // referenca drugo ime za postojeci objekat
  int& c = a; // ne mesati sa &a koji je izraz cija je vrednost 'adresa od a'

  std::cout << c << '\n'; // 4
  c = 10;
  std::cout << "a = " << a << '\n'; // a = 10

  std::cout << &a << '\n' << &c << '\n'; // iste adrese

  change_nothing(a);
  std::cout << "a = " << a << '\n'; // a = 10
  std::cout << "c = " << c << '\n'; // c = 10

  change(a);
  std::cout << "a = " << a << '\n'; // a = 0
  std::cout << "c = " << c << '\n'; // c = 0

  a = 10;
  change(c);
  std::cout << "a = " << a << '\n'; // a = 0
  std::cout << "c = " << c << '\n'; // c = 0


  // greska pri kompajliranju. lvalue referenca moze biti inicijalizovana
  // samo l-vrednoscu
  // int& d = 4;
  return 0;
}