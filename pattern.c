#include<stdio.h>

int main()
{
    int n,i,j,k;
    printf("Enter a number");
    scanf("%d",&n);

    for(i = 1;i<=n;i++)
    {
    for(k = n;k>=i;k--)
        printf(" ");
    for(j = 1;j<=i;j++)
    {
        printf("%d ",j);
    }
    printf("\n");
    }
    

}