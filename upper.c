#include<stdio.h>
#include<string.h>
void main()
{
    char a[10]="BriGosHz";
    int i;
    for(i=0;i<10;i++)
    {
        if(a[i]>='a'&&a[i]<='z')
           a[i]= a[i]-32;
        else
            a[i] = a[i]+32;
    }
    printf("%s",a);
}
