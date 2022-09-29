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
    return (a>b)?(a>c)?(a>d)?a:b:c:(b>a)?(b>c)?(b>d)?a:b:c:d:(c>d)?(c>a)?(c>b)?a:c:d:b:(d>a)?(d>b)?(d>c)?a:b:d:c;
}
