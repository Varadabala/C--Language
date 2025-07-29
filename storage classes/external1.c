#include <stdio.h>
#include "external2.c"

extern int externalVar;  // Declaration (defined in another file)

int main() {
    printf("External Variable = %d\n", externalVar);
    return 0;
}
