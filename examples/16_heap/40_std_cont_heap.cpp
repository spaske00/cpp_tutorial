#include<iostream>
#include<vector>
#include<string>
#include<array>
#include<list>


int main() {              //stack   
                          // xs                              // heap
    std::vector<int> xs;  // m_data ------------------------> [1,2,3, ]
                          // m_size = 3 
                          // m_capacity = 4
    xs.push_back(1);
    xs.push_back(2);
    xs.push_back(3);
                       // stack    
                       // ys                                ------------|          --------------|
    std::list<int> ys; // head--------------------> [, 1, next] <------[prev, 2, next]<--------[prev, 3, ] <-----[prev, ,]
                       // tail -----------------------------------------------------------------------------------^
                       // m_size = 3
    ys.push_back(1);
    ys.push_back(2);
    ys.push_back(3);

                             // stack
    std::array<int, 5> arr;  // int data[5];
     

    std::vector<int>* v = new std::vector<int>; // :( Nismo u Javi...
    return 0;
}