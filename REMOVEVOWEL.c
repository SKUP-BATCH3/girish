#include<stdio.h>
#include<string.h>

void main()
{
    char a[15] = "andrewtate",v[15];


    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]== 'u')
            v [i] = a[i];

    }
    for(int i=0;i<strlen(a);i++)
 printf("vowel = %c",v[i]);
}
\
