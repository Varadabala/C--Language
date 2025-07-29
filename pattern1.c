#include<stdio.h>

void pattern(int n)
{
    int i,j;
    for(i = 0;i<n;i++) 
    {
        for(j = 0;j<n;j++)
        {
            if(i == j || j==n-1-i ){
                printf("* ");
            }else{
                printf(" ");
            }    
        }
        printf("\n");
    }
}

int main()
{
    int n = 9 ;
    //printf("Enter a number : ");
    //scanf("%d",&n);
    pattern(n);
    return 0;
}

