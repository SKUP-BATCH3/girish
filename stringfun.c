#include<stdio.h>
void fun(char []);
char s[10]="Brigosha";
void fun(char s[])
{
    printf("%s",s);
}
void main()
{
    printf("String is\n");
    fun(s);
}

