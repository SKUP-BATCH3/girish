#include<stdio.h>
#include<time.h>
void main()
{
    int h,m,s,ch,cm,cs,th,tm,ts;
    printf("Enter time in hours,minutes and seconds\n");
    scanf("%d%d%d",&h,&m,&s);


    printf("Enter how many hours, minutes and seconds have passed\n");
    scanf("%d%d%d",&ch,&cm,&cs);


    ts = s+cs;
    tm = m+cm;
    th = h+ch;
    if(ts>=60)
    {
        tm++;
        ts=ts-60;
    }

    if(tm>=60)
    {
        th++;
        tm=tm-60;
    }

    if(th>24)
    {
        th=th-24;
    }
        printf("Current time is %d:%d:%d",th,tm,ts);
}
