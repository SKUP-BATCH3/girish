#include<stdio.h>
void fun(int[],int);
int i,n,count=0;
void main()
{
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter elements of an array\n");
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    fun(a,n);
}
void fun(int a[],int size)
{
    for(i=0;i<n;i++)
    {
        if(a[i]==1&&a[i+1]==2&&a[i+2]==3)
            count++;
    }
    if(count>=1)
        printf("123 exists\n");
    else
        printf("123 doesnt exist\n");
}
