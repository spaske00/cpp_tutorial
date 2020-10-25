#include<iostream>
#include<array>
#include<stdio.h>

// C++ Primer 5th, Chapter 7


void print_file_contents(const char* filename) {
    FILE *f = fopen(filename, "r");
    if (f == nullptr) {
        return;
    }
    // ops. Zaboravili smo da pozovemo fclose(f)
}


int main() {
    print_file_contents("14_raii.cpp");
    return 0;
}