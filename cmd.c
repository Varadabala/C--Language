#include<stdio.h>

int main(int argc,char *argv[])
{
    printf("Argument count %d\n",argc);
    for(int i = 0;i<argc;i++)
    {
    printf("Argument value %s = ",argv[i]);
    }
}