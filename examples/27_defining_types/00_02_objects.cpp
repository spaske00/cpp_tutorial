#include<iostream>


// memorija | lifetime

struct int_array_t {
    int *data;
    size_t size;
};

void int_array_init(int_array_t* This, size_t size) {
    This->data = (int*)calloc(sizeof(int), size);
    This->size = size;
}

void int_array_deinit(int_array_t *This) {
    free(This->data);
    This->data = nullptr;
    This->size = 0;
}


int main() {
    int_array_t* x = (int_array_t*)malloc(sizeof(int_array_t));

    int_array_init(x, 10);
    for (int i = 0; i < x->size; ++i) {
        x->data[i] = i;
    } 

    int_array_deinit(x);
    free(x);
    return 0;
}