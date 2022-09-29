#include<stdio.h>
 struct student{
    char a;
    int id;
    float marks;
    };
void main()
{


    struct student s[3];
    printf("ENTER THE VALUES of char, id , marks\n");

   for(int i=0;i<3;i++)
      {
        scanf("\n%c\n%d\n%f",&s[i].a,&s[i].id,&s[i].marks);
      }

    for(int i=0;i<3;i++)
      {
        printf("\n%c %d %f\n",s[i].a,s[i].id,s[i].marks);
      }

}
