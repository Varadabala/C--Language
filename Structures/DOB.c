//Dat of birth
#include<stdio.h>
#include<string.h>

struct time
{
    int hours;
    int min;
    int sec;
}t;

struct date
{
    int day;
    int month;
    int year;
    struct time t;
}d;

struct DateOfBirth {
    struct date d;
    char name[20];
    char city[20];
}dob;
int main(){
printf("Enter the Details : \n");
scanf("%s",dob.name);
scanf("%s",dob.city);
scanf("%d%d%d%d%d%d",&dob.d.day,&dob.d.month,&dob.d.year,&dob.d.t.hours,&dob.d.t.min,&dob.d.t.sec);
printf("Name = %d city = %d\n",dob.name,dob.city);
printf("Day:%d month:%d year:%d --> Hours:%d Minutes:%d Seconds:%d",dob.d.day,dob.d.month,dob.d.year,dob.d.t.hours,dob.d.t.min,dob.d.t.sec);

}