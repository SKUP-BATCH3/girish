#include<stdio.h>
void main()
{
    int *p,*k,a,b;
    printf("Enter values of 2 pointers\n");
    scanf("%d%d",&a,&b);
    p = &a;
    k = &b;
    if(*p>*k)
        printf("Max = %d",*p);
    else if(*k>*p)
        printf("Max = %d", *k);
    else
        printf("Both are equal;");
}
