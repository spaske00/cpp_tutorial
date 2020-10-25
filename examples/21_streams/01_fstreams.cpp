#include<iostream>
#include<fstream>
#include<sstream>

// C++ Primer 5th, Chapter 8.2


void read_from_file() {
    std::ifstream in("17_fstreams.cpp");
    if (!in.is_open()) {
        return;
    }
    std::string buffer;
    while (std::getline(in, buffer)) {
        std::cout << buffer;
    }
}

void write_to_file() {
    std::ofstream out("result.cpp");
    if (!out.is_open()) {
        return;
    }
    out << "int main() { return 0; }";
}

void print_file_contents(const char* filename) {
    std::ifstream f(filename);
    if (!f.is_open()) {
        return;
    }
    
    // stringstream je klasa koja u sebi sadrzi string 
    // i izvrsava ulazno/izlazne operacije nad stringom
    std::stringstream s;
    s << f.rdbuf();
    
    std::string buffer(s.str());
    std::cout << buffer;
}


int main() {
    print_file_contents("01_fstreams.cpp");
    return 0;
}