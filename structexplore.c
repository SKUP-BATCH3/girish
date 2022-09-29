#include<stdio.h>
struct emp
{
    int age;
    int sal;
    float exp;
};
void main()
{
    struct emp s = {20,31000,0.5};
    struct emp *p;
    p = &s;
    printf("Enter values age,sal and exp\n");
    scanf("%d%d%f",&(*p).age,&p->sal,&s.exp);
    printf("age = %d, sal = %d, exp = %f\n",(*p).age,p->sal,s.exp);
    int sum = (*p).age + p->sal + s.exp;
    printf("sum = %x\n",sum);
}
