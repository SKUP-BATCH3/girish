//alarm
#include<stdio.h>
void main()
{
    int week,vac,alarm;
    printf("Enter the day of week 0 = sun,1 = mon,....6 = sat\n");
    scanf("%d",&week);

    printf("Enter 0 if there is no vacation,1 if there is vacation\n");
    scanf("%d",&vac);

    if(vac==0)
    {
        printf("seven\n");
        if(week==0||week ==6)
            printf("There is no alarm\n");
        else if(week>6)
            printf("Enter correct values for week\n");
        else
            printf("Alarm is at 10\n");
    }
     if(vac>0)
    {

        if(week==0||week ==6)
            printf("Alarm is at 10\n");
        else if(week>6)
            printf("Enter correct values for week\n");
        else
            printf("Alarm is at 7\n");
    }
}
