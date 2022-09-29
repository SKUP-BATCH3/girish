#include<stdio.h>
void main()
{
    int a[]={1,-1,0,2,3,5,4},*p;
    p = &a[0];
    //printf("%d\n",(*p)++);
    printf("%d\n%d",++*p);

}
