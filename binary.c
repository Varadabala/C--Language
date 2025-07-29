#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    int arr[10];
    printf("Enter Decimal Number : ");
    scanf("%d",&n);
    for(i = 0;n>0;i++)
    {
        arr[i] = n%2;
        n = n/2;
    }
    printf("Binary Number is ");
    for(i = i-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    // for(i = 0;i<=n;i++)
    // {
    //     printf("%d",arr[i]);
    // }
}