#include <stdio.h>

void reverseString(char str[]) {
    int start = 0;
    int end = 0;

    // Find the length manually
    while (str[end] != '\0') {
        end++;
    }
    end--;  // Move to the last character (not '\0')

    // Swap characters from start to end
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    //int i = 0;
    // while (str[i] != '\0') {
    //     if (str[i] == '\n') {
    //         str[i] = '\0';
    //         break;
    //     }
    //     i++;
    // }

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
