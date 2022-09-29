#include<stdio.h>
#include<string.h>
char a[20];
char* ret();
void main()
{
    char* r;
    printf("Enter a string\n");
    scanf("%s",&a);
    r = ret();
    printf("%s",r);
}
char* ret()
{
    if(a[0]=='f'&&a[strlen(a)-1]=='b')
    {
        char* p ="FIZZBUZZ";
        return p;
    }
    else if(a[0]=='f')
    {
        static char p[10] ="FIZZ";
        return p;
    }
    else if(a[strlen(a)-1]=='b')
    {
        static char p[10] ="BUZZ";
        return p;
    }
    else return a;
}
