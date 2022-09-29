#include<stdio.h>
int n,m,i,j;
int ret(int[],int[],int,int);
void main()
{
    printf("Enter  size of 1st array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of first array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter size of 2nd array\n");
    scanf("%d",&m);
    int b[m];
    printf("Enter elements of 2nd array\n");
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);

    int r = ret(a,b,n,m);
    printf("\nresult = %d",r);
}
int ret(int a[],int b[],int n,int m)
{
    if(n==1)
        printf("Size of 1st array is 1\n");
    if(m==1)
        printf("Size of 2nd element is 1\n");
    else
        printf("Size is not 1 for both");

    if(a[0]==b[0]||a[n-1]==b[m-1])
        return 1;
    else
        return 0;

}
