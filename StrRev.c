#include<stdio.h>
#include<string.h>

int main()
{
    char str[50], str2[50];
    printf("Enter the string");
    fgets(str,sizeof(str),stdin);

     strcpy(str2,str);

  int len = strlen(str);
  int start = 0;
  int end = len-2;

  while(start < end)
  {
    char temp =str[start];
    str[start] = str[end];
    str[end] = temp;
    start++;
    end--;
}

printf("The reversed string is : %s",str);

if(strcmp(str2,str)==0)
{
    puts("Palindrome");
}
else{
    puts("Not a palindrome");
}

}