// It can be solved by Newton_rapson Method
// #include<stdio.h>

// int main()
// {
//     float n;
//     float i;
//     printf("Enter a Number : ");
//     scanf("%f",&n);

//     for(i = 0.01;i*i<n;i=i+0.01);
    
//     printf("The square value is %.2f",i);
//     return 0;
// }

#include<stdio.h>
int main()
{
    float x,n;
    int i;

    printf("Enter a number : ");
    scanf("%f",&n);

    x = n;

    for(i = 0;i<10;i++)
    {
        x = (x+n/x)/2;
    }

    printf(" The square root of a number is: %.2f",x);
}