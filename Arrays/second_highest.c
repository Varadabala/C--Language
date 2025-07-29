#include <stdio.h>

void program3() {
    int arr[] = {001, 500, 30, 25, 10};  // Try changing this
    int n = sizeof(arr) / sizeof(arr[0]);

    int first, second;
    first = arr[0];
     second = arr[1]; // INT_MIN

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
printf("Second largest = %d\n", second);
}

int main()
{   program3();
    return 0;
}
