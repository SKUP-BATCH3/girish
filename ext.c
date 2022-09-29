#include<stdio.h>
int dice1,dice2;
int dice();
void main()
{
    printf("Enter value of dice 1\n");
    scanf("%d",&dice1);
    printf("Enter value of dice 2\n");
    scanf("%d",&dice2);
    int r = dice();
    printf("sum = %d\n",r);
}
