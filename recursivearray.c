#include<stdio.h>
int a[5]={1,2,3,4,5},i=0;
int rec(int[],int);
void main()
{
    printf("Array = \n");
    rec(a,5);
}
int rec(int a[],int x)
{
    printf("%d\t",a[i]);
    i++;
    if(i>=5)
        return i;
    else
        rec(a,i);
}
