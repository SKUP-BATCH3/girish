#include<stdio.h>
void main()
{   int count=0;
    char a[20];
    printf("Enter a character\n");
    gets(a);
    for(int i=0;i<20;i++)
    if(a[i]==','||a[i]=='?'||a[i]=='.'||a[i]==';'||a[i]==':'||a[i]=='-'||a[i]=='!')
        count++;
    printf("%d",count);
}
