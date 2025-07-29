#include<stdio.h>
int main()
{
  int n;
  printf("Enter a size of a number : ");
  scanf("%d",&n);  
  int a[n];
  printf("Enter the array elements : ");
  for(int i = 0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
int flag=0;
for(int i = 0;i<n-2;i++)
{
    for(int j = i+1;j<=i+1;j++)
    {
        for(int k = j+1;k<=j+1;k++)
        {
            if(a[i]< a[j] && a[j] < a[k])
            {
                printf("%d %d %d\n",a[i],a[j],a[k]);
            }
            
        }
    }
}
printf("There are no numbers");
}
                