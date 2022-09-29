#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5},sum = 0,*s;
    s = &sum;


    for(int i = 0;i<5;i++)
        *s = *s + a[i];
    printf("%d",*s);
}
