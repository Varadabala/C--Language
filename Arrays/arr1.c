#include<stdio.h>

int main()
{
    int b;
    printf("Enter the size of an  array : \n");
    scanf("%d",&b);

    int arr[b];
    printf("Enter the array values : \n");
 
    for(int i = 0;i<b;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 0;i<b;i++)
    {
        printf("array value:%d\n",arr[i]);
    }
}