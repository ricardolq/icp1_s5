#include <stdio.h>

struct ExampleStruct {
    int a;
    float b;
    char c;
};

union ExampleUnion {
    int a;
    float b;
    char c;
};

int main() {
    struct ExampleStruct s;
    union ExampleUnion u;

    printf("Size of struct: %lu bytes\n", sizeof(s));
    printf("Size of union: %lu bytes\n", sizeof(u));

    return 0;
}