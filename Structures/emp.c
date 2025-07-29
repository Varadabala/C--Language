#include<stdio.h>


struct emp {
    int id;
    char name[50];
    int age;
    float salary;
};

int main()
{
    struct emp A;

    printf("Enter the Id :");
    scanf("%d",&A.id);
    printf("Enter the Name :");
    scanf("%s",&A.name);
    printf("Enter the Age :");
    scanf("%d",&A.age);
    printf("Enter the Salary :");
    scanf("%f",&A.salary);

    printf("Details :\nId : %d\nName : %s\nAge : %d\nSalary : %f\n",A.id,A.name,A.age,A.salary);


}