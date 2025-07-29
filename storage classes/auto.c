#include <stdio.h>

void func() {
    auto int x = 10;  // Auto variable (default behavior)
    printf("x = %d\n", x);
}

int main() {
    func();
    return 0;
}
