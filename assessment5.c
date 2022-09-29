#include<stdio.h>
int won(int, int);
int t[4],b[4],i,j,count=0;
void main()
{
    printf("enter the arbitaration\n");
    scanf("%d",&t[4]);
    printf("enter the 2 arbitaration\n");
    scanf("%d",&b[4]);
    for(i=0;i<4;i++)
    for(j=0;j<4;j++)
    if (t[i]==1==b[i])
        printf("lost\n");
    else
        printf("won\n");
count ++;
}
