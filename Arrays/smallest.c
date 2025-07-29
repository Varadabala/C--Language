#include<stdio.h>

int main()
{

    int n,i,min;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array values : \n");
 
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    for(int i = 0;i<n;i++)
    {
        printf("array value:%d\n",arr[i]);
        if(arr[i]<min)
        {
        min = arr[i];
        }
    }
    printf("min value : %d",min);
    
   
}