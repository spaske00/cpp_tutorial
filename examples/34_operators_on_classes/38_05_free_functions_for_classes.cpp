#include<vector>
#include<iostream>

bool operator==(const std::vector<int>& lhs, const std::vector<int> &rhs) {
    if (lhs.size() != rhs.size()) {
        return false;
    }
    for(size_t i = 0; i < lhs.size(); ++i) {
        if (lhs[i] != rhs[i]) {
            return false;
        }
    }
    return true;
}

bool operator!=(const std::vector<int>& lhs, const std::vector<int> &rhs)  {
    return !(lhs == rhs);
}

int main() {
    std::vector<int> x1{1,2,3,4}, x2{1,2,3,5};
    std::cout << (x1 == x2) << '\n';
    operator==(x1, x2);
    return 0;
}