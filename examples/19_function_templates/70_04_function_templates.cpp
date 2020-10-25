#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<array>

template<typename It, typename T>
size_t count(It beg, It end, const T& value) {
    size_t result = 0;
    for (; beg != end; ++beg) {
        if (*beg == value) {
            ++result;
        }
    }
    return result;
}

int main() 
{
    std::vector<int> xs{1,2,3,1,32,3,4,5};
    std::cout << count(xs.begin(), xs.end(), 1);

    std::list<char> ys{'a', 'b', 'c', 'b'};
    std::cout << count(ys.begin(), ys.end(), 'b');

    std::unordered_set<std::string> zs{"Hello", "World", "I"};
    std::cout << count(zs.begin(), zs.end(), "World");

    std::array<int, 5> arr{1,2,3,4,5};
    std::cout << count(arr.begin(), arr.end(), -6);

    return 0;
}