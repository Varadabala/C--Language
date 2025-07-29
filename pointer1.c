#include<stdio.h>

int main()
{
    int a = 10;

    int *p ;
    p = &a;
    *p++;
    

    printf("value %d\n",*p);
    printf("value %d ",*p);
    
}