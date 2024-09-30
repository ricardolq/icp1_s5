#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data *dataptr, data;
    dataptr = &data;

    data.i = 10;
    printf("dataptr->i : %d\n", dataptr->i);

    data.f = 220.5;
    printf("dataptr->f : %f\n", dataptr->f);

    strcpy(data.str, "C Programming");
    printf("dataptr->str : %s\n", dataptr->str);

    return 0;
}