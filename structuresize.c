#include<stdio.h>
void main()
{
    struct student{
    char a;
    int id;
    double marks;
    }s={'p',250,89.98};

    struct students{
    int id;
    double marks;
    char a;
    }sp;

    printf("size of structure = %d\n",sizeof(s));
     printf("size of structure = %d\n",sizeof(sp));
    printf("sum of size of structure = %d",sizeof(sp.a)+sizeof(sp.id)+sizeof(sp.marks));
}
