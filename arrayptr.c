#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int a[n],*p[n];
    printf("Enter the elements\n");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

for(i=0;i<n;i++)
      p[i] = &a[i];

    for(i=0;i<n;i++)
        printf("result=%x\t",*p[i]);

}
