#include<stdio.h>
#include<string.h>
int main(){
    int len1,len2,i;
char s1[110]="boom";
char s2[110]="isgood";
len1=strlen(s1);
len2=strlen(s2);
for(i=0;i<=len2;i++)
{
   s1[len1+i]=s2[i];
}
printf("%s\n",s1);
}
