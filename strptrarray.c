#include<stdio.h>
struct emp
{
    int age;
    int sal;
    float exp;
};
void main()
{
    struct emp s[3];
    struct emp *p[3];
    for(int i=0;i<3;i++)
    {
        p[i] = &s[i];
    }
    printf("Enter values age,sal and exp\n");
    for(int i=0;i<3;i++)
    {
        scanf("%d%d%f",&(*p[i]).age,&p[i]->sal,&s[i].exp);
    }
    for(int i=0;i<3;i++)
    {
        printf("age = %d, sal = %d, exp = %f\n",(*p[i]).age,p[i]->sal,s[i].exp);
    }
}

