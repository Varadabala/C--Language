#include <stdio.h>

void func() {
    register int counter = 0; 
    printf("Counter = %d\n", counter);
}

int main() {
    func();
    return 0;
}
