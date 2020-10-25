#include<iostream>
#include<string>
#include<fstream>
struct person_t {
    std::string m_name;
    int m_age;
};

std::ostream& operator<<(std::ostream& out, const person_t& rhs) {
    return out << rhs.m_name << ' ' << rhs.m_age;
    // (out << rhs.m_name)
    //    <<  ((out) << ' ')
    //           ((out) << rhs.m_age)
    // return         (out)
 }

std::istream& operator>>(std::istream& in, person_t& rhs) {
    return in >> rhs.m_name >> rhs.m_age;
}

int main() {
    person_t p;
    std::cin >> p;
    std::cout << p;

    std::fstream out("test");
    out << p;
    return 0;
}