// big number of 3 variables
#include<stdio.h>

int main()
{
    int a, b ,c;
    printf("Enter the values : ");
    scanf("%d%d%d",&a, &b, &c);

    if(a>b && a>c)
    {
        printf("A value is greater %d",a);
    }
    else if (b>c && b>a)
    {
        printf("B value is greater %d",b);
    }
    else{
        printf("C value is greater %d",c);
    }

    return 0;
}