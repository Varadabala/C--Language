#include <stdio.h>

void swap(int *a, int *b);
void selectionSort(int a[], int n); // New sort function prototype

int main() {
    int n = 5;
    int a[5] = {7, 4, 10, 3, 1};

    printf("Before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    selectionSort(a, n);  // Call to selection sort function

    printf("\nAfter sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

// Function to swap two integers using call by reference
void swap(int *a, int *b) {
    // int temp;
    *a = *a^*b ;
    *b = *a^*b ;
    *a = *a^*b ;
}

// selection Sort function with debugging prints
void selectionSort(int a[], int n) {
    int i, j, k, min;

    for (i = 0; i < n - 1; i++) {
         min = i;
        for (j = i+1; j < n; j++) {

            if (a[j] < a[min]) {                
                min = j;
            }
        } 
        if(min != i)
        {
            swap(&a[i], &a[min]);
        }
        /*printf("\ni = %d -> Current array: ", i);
        for (k = 0; k < n; k++) {
            printf("%d ", a[k]);
        }*/
    }
}
