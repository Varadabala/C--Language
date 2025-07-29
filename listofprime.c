#include<stdio.h>

int main()
{
    int i,a;
    int count = 0;

    printf("Enter a number : ");
    scanf("%d",&a);

    for(i = 1; i<=a; i++)
    {
        count = 0;
        for(int j = 1;j<=i;j++)
        {
          if(i%j == 0){
          count++;
        }
        }
        if(count == 2)
        {
            printf("values are :%d\n",i);
        }
    }
    
    
  return 0;  
}