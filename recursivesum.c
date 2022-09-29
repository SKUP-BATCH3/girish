#include<stdio.h>
int sum(int);
int n,add=0;
void main()
{
    printf("enter n value\n");
    scanf("%d",&n);
    sum(n);
}
int sum(int x)
{ int y=1;
    if(y>=n)
        return add;
    else
    {
        add=add+n;
        printf("%d  ",add);
        sum(n++);

    }
}
