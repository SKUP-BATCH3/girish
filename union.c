#include<stdio.h>
void main()
{
    union student
    {
    char a[21];
    int id;
    float marks;
    };
    union student s;
    printf("enter the name,id and marks\n");
    scanf("%s%d%f",&s.a,&s.id,&s.marks);
    printf("name = %s\nid = %d\nmarks = %f\n",s.a,s.id,s.marks);
    printf("size of structure = %d",sizeof(s));
}
