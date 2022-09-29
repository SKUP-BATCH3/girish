#include<stdio.h>
void main()
{
    char a[6] = "Eminem",b[6];
    int i,j;

    for(i=0,j=6;i<6,j>0;i++,j--)
        b[j] = a[i];
    for(i=0;i<=6;i++)
    printf("%c",b[i]);
}
