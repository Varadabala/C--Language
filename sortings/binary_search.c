#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;

        if ( key == arr[mid])
            return mid;  // Element found
        else if (key < arr[mid] )
            low = mid + 1;  // Search left half
        else
            high = mid - 1; // Search right half
    }

    return -1;  // Element not found
}

int main() {
    int n = 11;
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72, 91};
    int key = 23;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found.\n");

    return 0;
}
