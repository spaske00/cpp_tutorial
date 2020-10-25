#include<iostream>
#include<string>

struct person_t {
    friend std::ostream& operator<<(std::ostream&, const person_t&);
    friend std::istream& operator>>(std::istream&, person_t&);

    friend bool operator==(const person_t& lhs, const person_t &rhs);
    friend bool operator!=(const person_t& lhs, const person_t &rhs) {
        return !(lhs == rhs);
    }
private:
    std::string m_name;
    int m_age;
};

bool operator==(const person_t& lhs, const person_t &rhs) {
    return lhs.m_age == rhs.m_age && lhs.m_name == rhs.m_name;
}

std::ostream& operator<<(std::ostream& out, const person_t& rhs) {
    return out << rhs.m_name << ' ' << rhs.m_age;
}

std::istream& operator>>(std::istream& in, person_t& rhs) {
    return in >> rhs.m_name >> rhs.m_age;
}

int main() {
    person_t p1, p2;
    std::cin >> p1 >> p2;
    std::cout << (p1 == p2);
    std::cout << (p1 != p2);

    return 0;
}