#include<stdio.h>
void main()
{
    int n,i,b[100];
    printf("Enter the milk quantity in litres\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        b[i] = 0;

        b[i]+= n/10;
        n%=10;

        b[i]+=n/7;
        n%=7;

        b[i]+=n/3;
        n%=3;

        b[i]+=n/1;
        n%=1;
    }
    //for(i=0;i<n;i++)
    printf("quantity = %d",b[i]);
}
