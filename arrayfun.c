#include<stdio.h>
void fun(int [],int);
int n,i;
void main()

{
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    fun(a,n);
}
void fun(int a[],int size)
{
    printf("Enter elements of an array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
