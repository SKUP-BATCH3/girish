#include<stdio.h>
int big(int [],int);
int a[5]={1,2,9,8,1},i=0,large;
void main()
{
    printf("Largest element is\n");
    int r = big(a,5);
    printf("%d",r);
}
int big(int a[],int x)
{
    if(i==(x-1))
        return large;
    if(i<=(x-1))
    {
        if(a[i]>large)
            large = a[i];
        i++;
        big(a,x);
    }
}
