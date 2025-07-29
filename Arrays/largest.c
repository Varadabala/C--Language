#include<stdio.h>

int main()
{

    int n,i,max;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array values : \n");
 
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for(int i = 0;i<n;i++)
    {
        printf("array value:%d\n",arr[i]);
        if(arr[i]> max)
        {
            max = arr[i];
        }
    }
    printf("max value : %d",max);
    
   
}