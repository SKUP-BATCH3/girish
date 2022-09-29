#include<stdio.h>
int sum(int);
int n,count = 0;
void main()
{
    printf("Enter a no\n");
    scanf("%d",&n);
    sum(n);
    printf("sum = %d",count);
}
int sum(int n)
{
    count = count + n%10;

    if(n>0)
        sum(n/10);
    return count;
}
