#include<stdio.h>

int main()
{
    int *ptr;
    int a = 10;
    ptr = &a;
    *ptr += 1;
    printf("%d\n%d\n",*ptr,a);
}