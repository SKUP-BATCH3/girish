#include<stdio.h>
int n,y=0;
int fib(int);
void main()
{
    printf("Enter the value\n");
    scanf("%d",&n);
    fib(n);
}
int fib(int n)
{

    if(y>=n)
        return n;
    else
    { int z = y+1;
        printf("%d\t",y);
        z = z+y;
        fib(n--);
    }
}
