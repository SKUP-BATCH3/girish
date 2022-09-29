#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,count,maxcount = 0;
    char a[20],max;
    printf("Enter a string\n");
    scanf("%s ",a);

    for(i=0;i<strlen(a);i++)
    {
        count = 0;
        for(j=0;j<strlen(a);j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count>maxcount)
        {
            maxcount = count;
            max = a[i];
        }
    }
    printf("frequency of a character  %c is %d times",max,maxcount);
}
