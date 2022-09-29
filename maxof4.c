#include<stdio.h>
int max(int,int,int,int);
int a,b,c,d;
void main()
{
    printf("Enter 4 no's\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int m = max(a,b,c,d);
    printf("max=%d",m);
}
int max(int a,int b,int c,int d)
{
    return (a>b)?((a>c)?((a>d)?a:d):((c>d)?c:d)):((b>c)?((b>d)?b:d):(c>d)?c:d);
}
