#include<iostream>

int max(int a, int b) {
    return a < b ? b : a;
}

int max(long long a, long long b) {
    return a < b ? b : a;
}

float max(float a, float b) {
    return a < b ? b : a;
}

double max(double a, double b) {
    return a < b ? b : a;
}
struct day_t {
    int m_value;
};
bool operator<(const day_t& lhs, const day_t& rhs) {
    return lhs.m_value < rhs.m_value;
}

day_t max(day_t a, day_t b) {
    return a < b ? b : a;
}
// Ufff...sta ako imamo stotine tipova. Sta ako dodamo jos neki. TO znaci da moramo opet da pisemo funkciju max.


/*
T max(T a, T b) { 
    return a < b ? b : a;
}
    T je tip za koji je definsana operacija <
    I moze da se copy-inicijalizuje

*/


