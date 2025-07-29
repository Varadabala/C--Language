#include<stdio.h>

int main()
{
    int n;
    int count=0;

    printf("Enter the Number : ");
    scanf("%d",&n);

    for(int i = 0;i<=n;i++)
    {
        count = count+i;
    }
    printf("SUM = %d",count);
}