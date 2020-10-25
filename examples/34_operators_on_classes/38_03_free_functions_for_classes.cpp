#include<iostream>
#include<string>

struct person_t {
    friend std::ostream& operator<<(std::ostream&, const person_t&);
    friend std::istream& operator>>(std::istream&, person_t&);
private:
    std::string m_name;
    int m_age;
};

std::ostream& operator<<(std::ostream& out, const person_t& rhs) {
    return out << rhs.m_name << ' ' << rhs.m_age;
}

std::istream& operator>>(std::istream& in, person_t& rhs) {
    return in >> rhs.m_name >> rhs.m_age;
}

int main() {
    person_t p;
    std::cin >> p;
    std::cout << p;
    return 0;
}