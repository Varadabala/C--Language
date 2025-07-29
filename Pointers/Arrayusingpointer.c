#include<stdio.h>

int main()
{

    int n,i;
    printf("Enter the size fo the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements : ");
    for(i = 0;i<n;i++)
    {
         scanf("%d",&arr[i]);
    }

    int *p ;
    p = arr;
    printf("Elements are : ");
    for(i = 0;i<n;i++)
    {   
        if(arr[i] % 2 ==0)
        {
            continue;
        }
        printf("%d ",*(p+i));
    }
    return 0;
}