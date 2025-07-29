// big number of 2 variables
#include<Stdio.h>

int main()
{
    int a, b;
    printf("Enter the values : ");
    scanf("%d%d",&a, &b);
    if(a>b)
    {
        printf("A is greater %d",a);
    }
    else{
        printf("B is greater %d",b);
    }

    return 0;
}