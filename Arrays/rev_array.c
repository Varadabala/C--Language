#include<stdio.h>

int reverse( int arr[],int size)
{
    int start,end,temp;
    start = 0;
    end = size - 1;

    while(start < end)
    {
        temp = arr[start];
        arr[start] = arr[end] ;
        arr[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int arr[] = {10,20,30,40,50};

    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Original Array : ");
    for(int i = 0;i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    reverse(arr,size);
    printf("\nReversed Array : ");
    for(int i = 0;i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}