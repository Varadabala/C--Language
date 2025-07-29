#include <stdio.h>

    void swap(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    
    int partition(int a[], int lb, int ub) {
        int pivot = a[lb];
        int start = lb;
        int end = ub;
    
        while (start < end) {
            while (start <= ub && a[start] <= pivot)
                start++;
            while (end >= lb && a[end] > pivot)
                end--;
    
            if (start < end)
                swap(&a[start], &a[end]);
        }
    
        swap(&a[lb], &a[end]); // Place pivot in correct position
        return end;
    }
    
    
    void quickSort(int a[], int lb, int ub) {
        if (lb < ub) {
            int pi = partition(a, lb, ub); // Partitioning index
            quickSort(a, lb, pi - 1);        // Sort left
            quickSort(a, pi + 1, ub);       // Sort right
        }
    }
    
    int main() {
        int a[] = {10, 7, 8, 9, 1, 5};
        int n = sizeof(a) / sizeof(a[0]);
    
        quickSort(a, 0, n - 1);
    
        printf("Sorted array: ");
        for (int i = 0; i < n; i++)
            printf("%d ", a[i]);
    
        return 0;
    }
    