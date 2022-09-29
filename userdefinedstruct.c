#include<stdio.h>
void main()
{
    struct student
    {
    char a[21];
    int id;
    float marks;
    };
    struct student s;
    printf("enter the name,id and marks\n");
    scanf("%s%d%f",&s.a,&s.id,&s.marks);
    printf("name = %s\nid = %d\nmarks = %f\n",s.a,s.id,s.marks);
    printf("size of structure = %d",sizeof(s));
}
