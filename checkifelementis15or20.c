#include<stdio.h>
int check(int[],int);
int a[2],i,r;
void main()
{
    printf("Enter elements of a\n");
    for(i=0;i<2;i++)
        scanf("%d",&a[i]);
    r = check(a,2);
    printf("result = %d",r);
}
int check(int a[],int b)
{
    i=0;
    if(a[i]==15||a[i]==20||a[i+1]==15||a[i+1]==20)
        return 1;
    else
        return 0;
}
