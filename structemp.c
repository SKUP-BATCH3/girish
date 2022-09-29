#include<stdio.h>
void main()
{
    struct emp
    {
    char ename[20];
    long int empid;
    int age;
    float sal;
    float exp;
    };
    struct emp e;

        printf("enter details of employee1 name id age sal exp\n");
        scanf("%s%ld%d%f%f",&e.ename,&e.empid,&e.age,&e.sal,&e.exp);
        printf("op of emp 1 name:-%s\t empid:-%ld\t age:-%d\t sal:- %f\t exp:- %f\t",e.ename,e.empid,e.age,e.sal,e.exp);

        printf("\nenter details of employee2 name id age sal exp\n");
        scanf("%s%ld%d%f%f",&e.ename,&e.empid,&e.age,&e.sal,&e.exp);
        printf("op of emp 1 name:-%s\t empid:-%ld\t age:-%d\t sal:- %f\t exp:- %f\t",e.ename,e.empid,e.age,e.sal,e.exp);

        printf("\nenter details of employee3 name id age sal exp\n");
        scanf("%s%ld%d%f%f",&e.ename,&e.empid,&e.age,&e.sal,&e.exp);
        printf("op of emp 1 name:-%s\t empid:-%ld\t age:-%d\t sal:- %f\t exp:- %f\t",e.ename,e.empid,e.age,e.sal,e.exp);
}

