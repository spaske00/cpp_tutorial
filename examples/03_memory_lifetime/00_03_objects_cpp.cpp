#include<iostream>

struct int_array_t {
    int *data;
    size_t size;
    int_array_t(size_t s) {
        std::cout << __PRETTY_FUNCTION__ << s << '\n';
        data = (int*)calloc(sizeof(int), s);
        size = s;
    }
    
    ~int_array_t() {
        std::cout << __PRETTY_FUNCTION__ << size << '\n';
        free(data);
        data = nullptr;
        size = 0;
    }

};

int main() {
    std::cout << "Begin\n";

    {
        int_array_t x(10); // int* data, size_t size
        int_array_t y(11); // int *data, size_t size
    }

    {
        int_array_t* p = new int_array_t(1);
        delete p;
    }
    std::cout << "ENd\n";
    return 0;
}