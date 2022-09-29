#include<stdio.h>
void main()
{
    int n=2,h;
    printf("Enter mhex no\n");
    scanf("%x",&h);
    printf("%x",~(1<<n)&h);
}
