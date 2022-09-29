#include<stdio.h>
int n,y=0,z=1,u;
void fib(int);
void main()
{
    printf("Enter the value\n");
    scanf("%d",&n);
    printf("%d %d",0,1);
    fib(n-2);

}
void fib(int n)
{

    if(n>0)
    {

        u = y+z;
        y = z;
        z = u;
        printf(" %d",u);
        fib(n-1);
    }
}
