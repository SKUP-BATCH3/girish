#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,count=1,times=0;
    char a[30],b[20];
    printf("Enter string\n");
    gets(a);
    printf("Enter word\n");
    gets(b);

    for(i=0;i<strlen(a);i++)
    {   count = 1;
        for(j=0;j<strlen(b);j++)
        {
            if(a[i+j]!=b[j])
            {   count = 0;
                break;
            }

            //printf("in = %d\t",count);

        }
        if(count==1)
        {
            times++;
        }
            //printf("\n");
            //printf("out = %d\t",count);
    }
    printf("times = %d",times);
}
