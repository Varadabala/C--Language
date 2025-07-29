#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    int id;
    char name[50];
    float fees;
};

int main() {
    // Declare two structure variables
    struct Student s1 = {101, "Alice",20000.0};
    struct Student s2;

    // Create pointers to the structures
    struct Student *ptr1 = &s1;
    struct Student *ptr2 = &s2;

    // Copy structure values using pointers
    *ptr2 = *ptr1;

    // Print to verify
    printf("s2 ID: %d\n", s2.id);
    printf("s2 Name: %s\n", s2.name);
    printf("s2 Fees: %f\n", s2.fees);

    return 0;
}
