#include<stdio.h>
void fun(int [],int);
 int i,n,a[5];
void main()
{
    printf("Enter elements of an array\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    fun(a,5);

}
void fun(int a[],int size)
{
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
}
