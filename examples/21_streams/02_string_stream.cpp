#include<iostream>
#include<sstream>
#include<fstream>

// C++ Primer 5th, Chapter 8.3

// stringstream je klasa koja u sebi sadrzi string i izvrsava ulazno/izlazne operacije nad stringom
int main() {
    std::string input("2 3 4 5 6");
    std::istringstream ss(input);

    int a;
    while(ss >> a) {
        std::cout << a << ' ';
    }

    std::cout << '\n';

    std::ostringstream out;
    out << "\n//Ovo je ucitano koriscenjenjm stringstream klase. Yey!";

    std::string contents(out.str());
    std::cout << contents;
    

    return 0;
}
