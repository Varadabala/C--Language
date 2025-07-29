#include <stdio.h>

//void swap(int *a, int *b);
void insertionSort(int a[], int n); // New sort function prototype

int main() {
    int n = 5;
    int a[5] = {16, 14, 6, 5, 8};

    printf("Before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    insertionSort(a, n);  // Call to insertion sort function

    printf("\nAfter sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

// Swap function (optional for insertion sort, not used here)
// void swap(int *a, int *b) {
//     *a = *a ^ *b;
//     *b = *a ^ *b;
//     *a = *a ^ *b;
// }

// Insertion Sort function with debugging prints
void insertionSort(int a[], int n) {
    int i, j,temp, k;

    for (i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;

        // Move elements of a[0..i-1], that are greater than key, one position ahead
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = temp;

        // Debug print for each iteration
        printf("\ni = %d -> Current array: ", i);
        for (k = 0; k < n; k++) {
            printf("%d ", a[k]);
        }
    }
}
