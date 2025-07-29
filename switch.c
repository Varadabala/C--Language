#include<stdio.h>
int main()
{
int a ;
printf("Enter the element");
scanf("%d",&a);

switch(a)
{
    case 1:
        printf("a");
        break;
    case 2:
    case 3:
        printf("b");
        break;

    default:
        printf("Error");
        break;

}
return 0;
}