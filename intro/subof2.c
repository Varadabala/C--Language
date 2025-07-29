// substraction of 2 numbers
#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter the values : ");
    scanf("%d%d",&a, &b);
    if(a<b)
    {
        printf("a value less than b %d",a);
        return 0;
    }
    int sub = a - b;
    printf("Sub : %d\n", sub);
    return 0;
}
