#include<iostream>
#include<string>

// C++ Primer 5th, Chapter 6.2

// prenos po vrednosti. std::string se u ovom slucaju semanticki ponasa kao int, pravi se kopija
void capitalize(std::string& s) { // std::string& s
    s[0] = std::toupper(s[0]);
}


// const zato sto is_shorter ne menja verdnosti prosledjenih argumenata
// takodje, mozemo prosediti string literal
bool is_shorter(const std::string& s1, const std::string& s2) { 
    // std::string s1, std::string s2
    return s1.size() < s2.size();
}

int main() {
    std::string x("hello");
    capitalize(x);
    std::cout << x << '\n';

    std::string y("w");
    std::cout << is_shorter(x, y) << '\n';
    std::cout << is_shorter(x, "hello World");
    
    return 0;
}