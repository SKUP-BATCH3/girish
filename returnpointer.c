#include<stdio.h>
int** fun(int*,int*);
//int i,j;
void main()
{
   static int i,j;
    printf("Enter 2 elements\n");
    scanf("%d%d",&i,&j);
    printf("address of i = %d\n",&i);
    int **r;
    r = fun(&i,&j);
    printf("sum = %d\n",**r);
    printf("sum from returned pointer of address= %d\n",*r);

}

int** fun(int *i,int *j)
{
    *i = *i+*j;
    int** p= &i;
    printf("address = %d\n",*`p);
    return p;
}
