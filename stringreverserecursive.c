#include<stdio.h>
#include<string.h>
char a[10]="Brigosha";
int i = 10;
char* rev(char[],int);
void main()
{
    printf("Normal string is %s\n",a);
    printf("Reverse =");
    //i = strlen(a);
    rev(a,10);
}
char* rev(char a[],int s)
{
    if(i>=0)
    {
        printf("%c",a[i]);
        i--;
        rev(a,10);
    }
}
