#include <stdio.h>
#include <string.h>

// Define a struct to represent a person
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Create an instance of the struct
    struct Person *personptr, person1;

    // Assign values to the struct members
    strcpy(person1.name, "John Doe");
    person1.age = 30;
    person1.height = 5.9;

    personptr = &person1;

    // Print the values of the struct members
    printf("Name: %s\n", personptr->name);
    printf("Age: %d\n", personptr->age);
    printf("Height: %.1f\n", personptr->height);

    return 0;
}