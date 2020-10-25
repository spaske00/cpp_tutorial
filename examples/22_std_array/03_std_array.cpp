#include<iostream>
#include<array>


/*

------------------              -------------          -------------
|                |              |           |          |           |
|   Containers   |   <--------> |  Iterator |  <-----> | Algorithm |
|                |              |           |          |           |
------------------              -------------          -------------
array,                        begin, end
vector,
map, set,
unordered_map,
unordered_set,
list
*/


// https://www.learncpp.com/cpp-tutorial/6-15-an-introduction-to-stdarray/

// std::array<int, 4> arr;
//  stack                            heap
//  arr{ int data[4]; }              ------



void copy_array(std::array<int, 5> xs) { // copy inicijalizovan xs
    for (int x : xs) {
        x = 0; // x kopija svakog elementa
    }
}

void modify_array(std::array<int, 5> &xs) { // l-value reference
    for (int& x : xs) {
        x = 0; // x referenca na pojedinacne elemente tokom iteracije
    }
}

void read_array(const std::array<int, 5> &xs) {

}

int main() {
    std::array<int, 5> arr;
    
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 42;
    arr[3] = 12;
    arr[4] = 45;
    // arr[5] Nedefinisano ponasanje

    arr.at(3) = 10;

    std::array<int, 5> arr2;
    arr2 = arr;

    std::cout << "arr2 = ";
    for (int e : arr2) {
        std::cout << e << ' ';
    }

    copy_array(arr2);
    std::cout << "\n\nafter incorrect_zero arr2 = ";
    for (int e : arr2) {
        std::cout << e << ' ';
    }

    modify_array(arr2);
    std::cout << "\n\nafter correct_zero arr2 = ";
    for (int e : arr2) {
        std::cout << e << ' ';
    }

    //                      [0,1,2,3,4]
    // arr.begin() ---------^
    // arr.end()   --------------------^
    int* beg = arr.begin(); // iterator
    int* end = arr.end(); // 

    for (auto it = arr.begin(); it != arr.end(); ++it) {
        std::cout << *it << '\n';
    }
    std::cout << "------------------\n";
    // read-modify loop
    for (auto& e : arr) {
        e += 1;
    }

    std::cout << "------------------\n";
    // read only loop
    for (const auto& e : arr) {
        std::cout << e << '\n';
    }

    // for (auto e : arr) {
    //   e = 0;    
    //}

    std::cout << "------------------\n";
    arr.size();
    try {
        arr.at(10);
    } catch (const std::out_of_range& e) {
        std::cout << e.what();
    }
    

    return 0;
}