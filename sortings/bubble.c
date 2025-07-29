#include <stdio.h>

//void swap(int *a, int *b);
//void bubbleSort(int a[], int n); // New sort function prototype

// Function to swap two integers using call by reference
void swap(int *a, int *b) {
    //int temp;
    *a = *a^*b ;
    *b = *a^*b ;
    *a = *a^*b ;
}
// Bubble Sort function with debugging prints
void bubbleSort(int a[], int n) {
    int i, j, k;
    for (i = 0; i < n - 1; i++) {
        int flag = 0;
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {                
                swap(&a[j], &a[j + 1]);
                flag = 1;
            }
        }
        if(flag == 0 ){
            break;
        }
        printf("\ni = %d -> Current array: ", i);
        for (k = 0; k < n; k++) {
            printf("%d ", a[k]);
        }
    }
}
int main() {
    int n = 5;
    //int a[5] = {16, 14, 6, 5, 8};
    int a[5] = {10, 5, 6, 14, 8};

    printf("Before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    bubbleSort(a, n);  // Call to bubble sort function

    printf("\nAfter sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}