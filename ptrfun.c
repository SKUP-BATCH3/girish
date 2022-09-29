#include<stdio.h>
int maths(int,int);
int (*ptr)(int,int);
int a,b;
void main(int a,int b)
{
    int r;
    printf("Enter w no's\n");
    scanf("%d%d",&a,&b);

    int (*ptr)(int,int) =&maths;
    r = (*ptr)(a,b);
    printf("%d",r);
}
int maths(int a,int b)
{   int op;
    printf("Enter \t 0 for add\t1 for sub\t2 for mul\t3 for div\n");
    scanf("%d",&op);
    if(op==0)
        return (a+b);
    else if(op==1)
        return (a-b);
    else if(op==2)
        return (a*b);
    else if(op==3)
        return (a/b);
    else
        main(a,b) ;
}
/*int sum(int a,int b)
{

    int res;
    res=a+b;
}*/
