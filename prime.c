#include<stdio.h>

int main()
{
    int i,a;
    int count = 0;

    printf("Enter a number : ");
    scanf("%d",&a);

    for(i = 1; i<=a; i++)
    {
        if(a%i == 0){
        count++;
        }
    }

    if(count == 2)
    {
        printf("PRime");
    }
    else{
        printf("NOt prime");
    }
}