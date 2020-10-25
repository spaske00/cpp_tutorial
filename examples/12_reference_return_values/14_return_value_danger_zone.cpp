

int& return_reference_to_local_object() {
    int a = 42;
    return a;
}

int* return_pointer_to_local_object() {
    int a = 42;
    return &a;
}

int& danger(int a) {
    return a;
}

int main() {
    int& x = return_reference_to_local_object(); // UB


    int* p = return_pointer_to_local_object(); // UB dangling pointer

    return 0;
}
