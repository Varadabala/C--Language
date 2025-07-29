#include <stdio.h>
#include <string.h>
char word_check(char * src,char * dest)
{
    while(sr)
}


char str_cmp(char *src, char *dest)
{
    int i = 0,j = 0,flag = 1;
        while(src[i] != '\0' && dest[j] != '\0')
        {
            if(src[i] == dest[j])
            {
             flag = 0;
            }
            else
            {
                return 1;
            }
            i++;
            j++;
        }
    
    
    return flag;
}
int repeated_Char(char *dest,char ex_char)
{
    int flag = 0,count = 0;
    int i = 0;

    while(dest[i] != '\0'){
        if(dest[i] == ex_char)
        {
            count++;
        }
        if(dest[i] == ex_char && count > 1)
        {
            
            flag = 1;
        }
        else{
            flag = 0;
        }
        i++;
    }
    return flag;  
}
int countChar(char * dest,char ex_char)
{
    int count=0;
    int i = 0;
    while(dest[i] != '\0'){
        if(dest[i] == ex_char)
        {
            count++;
        }
        i++;
    }
    return count;
}
int str_char(char* src,char ex_char)
{
    int flag =0;
    int i = 0;
    while(src[i] != '\0'){
        if(src[i] == ex_char)
        {
            flag = 1;
        }
        else{
            flag = 0;
        }
        i++;
    }
    return flag;  
}
void str_cat(char *src, char *dest)
{
    int i = 0;
    while (src[i] != '\0')
    {
        //src[i];
        printf("%d %c",i,src[i]);
        i++;
        
    }
    int j = 0;
    while (dest[j] != '\0')
    {
        src[i] = dest[j];
        printf("%d %d %c %c",i,j,src[i],dest[j]);
        i++;
        j++;
    }
    src[i] != '\0'; 
} 
void str_cpy(char *dest, char *src)
{
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
} 
void str_rev(char *p)
{
    int start = 0;
    int end = strlen(p)-1;
    
    while (start < end)
    {
        char temp = p[start];
        p[start] = p[end];
        p[end] = temp;
        printf ("%d %d\n",p[start], p[end]);
        start++;
        end--;
        
    }
}

int main()
{
    char str[50] = "Bala", tmp[50] = "Narasimha",  ex_char ='s';
    char sent[50] = "This is Bala";
    //printf("Enter a string : ");
    // fgets(str, sizeof(str), stdin);
    //printf("Before reversing : %s",str);
    //str_rev(str);
    //printf("After reversing : %s",str);
    //str_cpy(tmp, str);
    //printf("\nAfter copying : %s",tmp);
    // str_cat(str, tmp);
    // printf("\nAfter Concatenation : %s",str);
    // int isFind =  str_char(tmp, ex_char);
    // printf("%d",isFind);
    // int x = countChar(tmp,ex_char);
    // printf("%d",x);
    // int y = repeated_Char(tmp,ex_char);
    // printf("%d",y);
    // int z = str_cmp(str,tmp);
    // printf("%d",z);
    //word_check(sent,str);
    return 0;
}
