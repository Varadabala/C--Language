#include<stdio.h>
struct Mystruct {
    int a;
    float b;
    int c;    
};
struct Mystruct swap(struct Mystruct *emp, struct Mystruct *stu) {
    
    struct Mystruct temp;
    temp = *emp;
    *emp = *stu;
    *stu = temp;
}
int main()
{
    struct Mystruct emp,stu;   
        printf("Enter the value of a: ");
        scanf("%d",&emp.a);
        printf("Enter the value of b : ");
        scanf("%f",&emp.b);
        printf("Enter the value of c : ");
        scanf("%d",&emp.c);
        printf("%d %f %d\n",emp.a,emp.b,emp.c);
        
    
        printf("Enter the value of p: ");
        scanf("%d",&stu.a);
        printf("Enter the value of q : ");
        scanf("%f",&stu.b);
        printf("Enter the value of r : ");
        scanf("%d",&stu.c);
        printf("%d %f %d\n",stu.a,stu.b,stu.c);
        
        swap(&emp, &stu);
        printf("After swapping\n");
        
        printf("emp = %d %f %d\n",emp.a,emp.b,emp.c);
        printf("stu = %d %f %d\n",stu.a,stu.b,stu.c);   
}

