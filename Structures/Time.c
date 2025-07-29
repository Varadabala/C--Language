#include<stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds; 
} time1,time2,timediff;

int main()
{   
    int i; 
    //time1 timings
    int Flag = 1;
    printf("Enter the Hours of time1: ");
    scanf("%d",&time1.hours);
    while (Flag) 
    {
        if(time1.hours >= 24 || time1.hours < 0)
        {
        printf("Enter the value betweeen 0 to 24 :");
        scanf("%d",&time1.hours);
        }
        else {
            Flag = 0;
        }
    }
    Flag =1;
    printf("Enter the Minutes of time1 : ");
    scanf("%d",&time1.minutes);
    while(Flag)
    {
        if(time1.minutes >= 60 || time1.minutes < 0 )
        {
            printf("Enter the value betweeen 0 to 60 :");
            scanf("%d",&time1.minutes);
            }
        else
        {
            Flag = 0;
        }
    }
    Flag = 1;
    printf("Enter the seconds of time1: ");
    scanf("%d",&time1.seconds);
    while(Flag)
    {
        if(time1.seconds >= 60 || time1.seconds < 0)
        {
            printf("Enter the value betweeen 0 to 60 :");
            scanf("%d",&time1.seconds);
        }
        else{
            Flag = 0;
        }
        
    }

    //time2 timings
    Flag = 1;
    printf("\nEnter the Hours of time2 : ");
    scanf("%d",&time2.hours);
    while (Flag) 
    {
        if(time2.hours >= 24 || time2.hours < 0)
        {
        printf("Enter the value betweeen 0 to 24 :");
        scanf("%d",&time2.hours);
        }
        else {
            Flag = 0;
        }
    }
    Flag = 1;
    printf("Enter the Minutes of time2 : ");
    scanf("%d",&time2.minutes);
    while(Flag)
    {
        if(time2.minutes >= 60 || time2.minutes < 0)
        {
            printf("Enter the value betweeen 0 to 60 :");
            scanf("%d",&time2.minutes);
            }
        else{
            Flag = 0;
        }
    }
    Flag = 1;
    printf("Enter the seconds of time2 : ");
    scanf("%d",&time2.seconds);
    while(Flag)
    {
        if(time2.seconds >= 60 || time2.seconds < 0)
        {
            printf("Enter the value betweeen 0 to 60 :");
            scanf("%d",&time2.seconds);
        }
        else{
            Flag = 0;
        }
    }

    printf("\ntime1 --> Hours = %d Minutes = %d  Seconds = %d",time1.hours,time1.minutes,time1.seconds);
    printf("\ntime2 --> Hours = %d  Minutes = %d  Seconds = %d",time2.hours,time2.minutes,time2.seconds);
 

    //Time Differnce
    timediff.hours = time2.hours - time1.hours;
    timediff.minutes= time2.minutes - time1.minutes;
    timediff.seconds= time2.seconds - time1.seconds;
    
    if(time1.hours >= time2.hours && time1.minutes >= time2.minutes && time1.seconds >= time2.seconds)
    {
        if(time1.hours == time2.hours && time1.minutes == time2.minutes && time1.seconds == time2.seconds)
            printf("\nBoth the times are equal %d:%d:%d",timediff.hours,timediff.minutes,timediff.seconds);
        else 
            printf("\nTime 1 is big --> %d:%d:%d",timediff.hours,timediff.minutes,timediff.seconds);
    }
    else{
        printf("\nTime 2 is big --> %d:%d:%d",timediff.hours,timediff.minutes,timediff.seconds);
    }

    printf("\nDifference --> Hours = %d  Minutes = %d  Seconds = %d",timediff.hours,timediff.minutes,timediff.seconds);

    return 0;
}
