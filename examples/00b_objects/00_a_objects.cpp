/*
https://en.cppreference.com/w/cpp/language/object

    >C++ programs create, destroy, refer to, access, and manipulate objects.
    >An object, in C++ , is a region of storage that (until C++14) has
    >    • size (can be determined with sizeof);
    >    • alignment requirement (can be determined with alignof);
    >    • storage duration (automatic, static, dynamic, thread-local);
    >    • lifetime (bounded by storage duration or temporary);
    >    • type;
    >    • value (which may be indeterminate, e.g.
            for default-initialized non-class types); >    • optionally, a name. >The
            following entities are not objects: value, reference, function, enumerator,
            type, non-static class member, >template, class or function template
            specialization, namespace, parameter pack, and this. >A variable is an object or
            a reference that is not a non-static data member, that is introduced by
            a declaration.

    Objekti se kreiraju eksplicitno:
        definicijom
        new izrazom
        throw izrazom
        izrazunavanjem izraza koji zahteva privremeni objekat

*/
#include <iostream>

struct my_type_t {
    int a;

    my_type_t(int x) : a(x) {
        std::cout << __PRETTY_FUNCTION__ << a << '\n';
    }

    ~my_type_t() {
        std::cout << __PRETTY_FUNCTION__ << a << '\n';
    }
};

void f() {
    my_type_t* p = new my_type_t(1);
    delete p;
}

int main() {
    f();
    return 0;
}