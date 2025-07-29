#include <stdio.h>



static void add(){
    printf("add static method");
    //sub();
}

static void sub(){
    printf("sub static method");
    add();
}
void counter() {
    /* 
        It initilize only once.
        Static variable retains value between calls.
        Stogage data segment.
        Default value is zero for uninitialized variables.
        
     */
    static int count;
    int increment;
    printf("Count = %d and Incremnt -> %d\n", count, increment);
    increment++;
    count++;
    printf("Count = %d and Incremnt -> %d\n", count, increment);
    sub();
}


int main(int argv,int *argc[]) {
    counter();
    counter();
    counter();

    add();
    return 0;
}


/**
 Storage classes :- To increase lifetime and scope of the variable -->
 1.static -> 
 2.auto
 3.extern
 4.register
 */