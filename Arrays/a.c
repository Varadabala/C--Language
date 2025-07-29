#include<stdio.h>

int main()
{
    int b,i;
    printf("Enter the number : ");
    scanf("%d",&b);

    
    for( i = 0 ; i <= b ;i++)
    {
        printf("%d ",(i * 3));
    }
    return 0;
}