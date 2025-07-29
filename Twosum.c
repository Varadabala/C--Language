#include<stdio.h>
int main(){
int n,target;
printf("Enter the size : ");
scanf("%d",&n);
int a[n];
printf("Enter the array elements : ");
for(int i = 0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("Enter the Target value: ");
scanf("%d",&target);

for(int i = 0;i<n-1;i++)
{
    for(int j = i+1;j<n;j++)
    {
        if(a[i]+a[j] == target)
        {
            printf("%d %d",i,j);
        }
    }
}
}