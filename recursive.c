#include<stdio.h>

void statement(int n)
{
    if(n>0)
    {
        printf("Hello World!\n");
        statement(n-1);
    }
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    statement(n);
}