#include<stdio.h>
void main()
 {
    char a[20] = "|!108Jai Shree Ram@123",b[20];
    int i,j=0;
    for(i = 0;i<20;i++)
    {
        if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
        {
            b[j] = a[i];
            j++;
        }
    }
   printf("%s\n",b);
 }
