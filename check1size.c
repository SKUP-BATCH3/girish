#include<stdio.h>
int ret(int[],int);
int n,i,j;
void main()
{
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    int r = ret(a,n);
    printf("result = %d",r);
}
int ret(int a[],int n)
{
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    {
        if(n==1)
            printf("size of the array is one\n");
        else
        {
            printf("size of the array is not one\n");
            if(a[0]==a[n-1])
                return 1;
            else
                return 0;
        }
    }
}
