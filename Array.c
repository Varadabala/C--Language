// #include<stdio.h>
// int i;
// int main()
// {   
//     int b = 0;
//     int arr[] = {1,2,3,4,5}; //array declaration
//     int size = sizeof(arr)/sizeof(arr[1]); //to find the size
//     for(i = 0 ;i <size; i++)
//     {
//         b += arr[i];
//        // printf("Value:%d\n",b);
//     }
//     printf("Value:%d\n",b);
// }

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