
#include<stdio.h>

 void swap(int *a, int *b);

int main()
{

    int a[2] = {10,5};
    printf(" \nbefore swap -> a[0] =%d -> a[1]=%d", a[0],a[1]);
    swap(&a[0],&a[1]);
    printf(" \tAfter swap -> a[0] =%d -> a[1]=%d", a[0],a[1]);
    return 0;
}
void swap(int *a, int *b) {
    int temp;
    printf(" \nIn method before swap -> a =%d -> b=%d", *a,*b);
    temp = *a;
    *a = *b;
    *b = temp;
    printf("\t In method After swap -> a =%d -> b=%d\n", *a,*b);
}
