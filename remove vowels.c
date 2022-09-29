#include<stdio.h>
#include<string.h>

void main()
{
    char a[15] = "andrewtate";


    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]== 'u')
            a[i]=' ';

    }

    printf("consonants = %s",a);
}
