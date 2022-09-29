#include<stdio.h>
int nat(int);
int n=1;
void main()
{
    printf("Natural no's from 1 to 50\n");
    nat(n);
}
int nat(int x)
{
    if(x>=50)
        return x;
    else
    {
        printf("%d  ",n);
        nat(n++);
    }
}

