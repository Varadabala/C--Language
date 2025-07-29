#include<stdio.h>
int swap(int *p , int *q ,int *r)
{
    int temp;
    temp = *q;
    *q = *p;
    *p = *r;
    *r = temp;
}
int main()
{
    int a,b,c;
    printf("Enter the values of A , B , C : ");
    scanf("%d%d%d",&a,&b,&c);

    printf("values Before swapping : \n");
    printf("a = %d , b = %d , c = %d",a,b,c);

    swap(&a,&b,&c);

    printf("\nvalues After swapping : \n");
    printf("a = %d , b = %d , c = %d",a,b,c);
}