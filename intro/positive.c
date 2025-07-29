#include<stdio.h>

int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);

    if(a>0)
    {
        printf("Positive Number %d",a);
    }
    else{
        printf("Negative Number %d",a);
    }

}