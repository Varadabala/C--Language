#include<stdio.h>

int main()
{
    int a;
    int b;
    
    printf("Enter a Number : ");
    scanf("%d",&a);
    printf("Enter a Number1 : ");
    scanf("%d",&b);

    int arr[a];
    int arr1[b];
    int f=a+b;
    int z[f];
    printf("Enter the array values");
    for(int i = 0;i<a;i++)
    {
    scanf("%d",&arr[i]);
    }
    
    printf("Enter the array1 values");
    for(int i = 0;i<a;i++)
    {
    scanf("%d",&arr1[i]);
    }

    int j=0;
    for(int i=0;i<a;i++)
    {
        z[j]=arr[i];
        j++;
    }
    for(int i=0;i<b;i++)
    {
        z[j]=arr1[i];
        j++;
    }
    for(int i=0;i<f;i++){
        printf("%d ",z[i]);
    }
}