#include<stdio.h>
struct Mystruct {
    int a;
    float b;
    int c;    
};

int main()
{
    struct Mystruct emp,stu,temp ;
        printf("Enter the value of a: ");
        scanf("%d",&emp.a);
        printf("Enter the value of b : ");
        scanf("%f",&emp.b);
        printf("Enter the value of c : ");
        scanf("%d",&emp.c);

        printf("%d %f %d\n",emp.a,emp.b,emp.c);
        
    //struct Mystruct1 stu ;
        printf("Enter the value of p: ");
        scanf("%d",&stu.a);
        printf("Enter the value of q : ");
        scanf("%f",&stu.b);
        printf("Enter the value of r : ");
        scanf("%d",&stu.c);

        printf("%d %f %d\n",stu.a,stu.b,stu.c);
        
        //int  temp;
        temp = emp;
        emp = stu;
        stu = temp;
        printf("After swapping\n");
        
        printf("emp = %d %f %d\n",emp.a,emp.b,emp.c);
        printf("stu = %d %f %d\n",stu.a,stu.b,stu.c);
        
    
}

#include <stdio.h>

// Define structure
struct Data {
    int a;
    float b;
    int c;
};


without using temp variable
int main() {
    struct Data s1, s2;

    // Taking input for first structure
    printf("Enter values for first structure (int float int): ");
    scanf("%d %f %d", &s1.a, &s1.b, &s1.c);

    // Taking input for second structure
    printf("Enter values for second structure (int float int): ");
    scanf("%d %f %d", &s2.a, &s2.b, &s2.c);

    // Swapping without temp variable
    s1.a ^= s2.a;
    s2.a ^= s1.a;
    s1.a ^= s2.a;

    s1.c ^= s2.c;
    s2.c ^= s1.c;
    s1.c ^= s2.c;

    s1.b = s1.b + s2.b;
    s2.b = s1.b - s2.b;
    s1.b = s1.b - s2.b;

    // Printing after swap
    printf("\nAfter Swapping:\n");
    printf("First Structure: %d %.2f %d\n", s1.a, s1.b, s1.c);
    printf("Second Structure: %d %.2f %d\n", s2.a, s2.b, s2.c);

    return 0;
}
