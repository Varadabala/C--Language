// small number of 3 variables
#include<stdio.h>
int main(){
int a, b,c;
    printf("Enter the values : ");
    scanf("%d%d%d",&a, &b,&c);
    if(a<b && a<c)
    {
        printf("A is smaller %d",a);
    }
    else if(b < c && b < a){
        printf("B is smaller %d",b);
    }
    else{
        printf("C is smaller %d",c);
    }

    return 0;
}