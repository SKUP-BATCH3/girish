#include<stdio.h>
int ret(int,int,int);
int a,b,c;
void main()
{
    printf("Enter 3 integers in increasing order\n");
    scanf("%d%d%d",&a,&b,&c);
    int r = ret(a,b,c);
    printf("result = %d",r);
}
int ret(int a,int b,int c)
{
    if(a==b||b==c||a==c)
        return 1;
    if(a<b&&b<c)
        return 1;
    return 0;
}
