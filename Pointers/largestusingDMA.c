#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;
    int largest;

    // Ask user for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Find the largest element
    largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Output the result
    printf("The largest number is: %d\n", largest);

    // Free dynamically allocated memory
    free(arr);

    return 0;
}
