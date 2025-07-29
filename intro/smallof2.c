// small number of 2 variables

#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter the values : ");
    scanf("%d%d",&a, &b);
    if(a<b)
    {
        printf("A is smaller %d",a);
    }
    else{
        printf("B is smaller %d",b);
    }
    return 0;
}