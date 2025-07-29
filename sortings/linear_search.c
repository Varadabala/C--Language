#include<stdio.h>

int linear_search(int a[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(a[i] == k)
        {
            printf("%d", i);
        }
    }
}

int main(){
    int n = 5;
    int a[] = {10,11,12,13,141};
    int k = 10;
    linear_search(a,n,k);

    return 0;
}
