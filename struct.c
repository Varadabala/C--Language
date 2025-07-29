#include<stdio.h>

struct abc {
    int a;
    float b;
};

int main()
{
    struct abc x;

    x.a = 10;

    struct abc *p = &x;
    printf("%d\n",p->a);
}