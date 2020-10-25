#include<iostream>
#include<array>
#include<stdio.h>

// C++ Primer 5th, Chapter 7

// RAII - Resource acquisition is initialization

struct file_handle_t {
    FILE *f;

    file_handle_t(const char* filename, const char* mode)
    : f(fopen(filename, mode)) {

    }

    ~file_handle_t() {
        if (f)
            fclose(f);
    }
};

void print_file_contents(const char* filename) {
    file_handle_t handle(filename, "r");
    if (handle.f == nullptr) {
        return;
    }
    
    // ops. Zaboravili smo da pozovemo fclose(f)
    // sve je ok! Destruktor ce pozvati fclose na kraju opsega
}


int main() {
    print_file_contents("14_raii.cpp");
    return 0;
}