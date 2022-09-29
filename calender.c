#include<stdio.h>
char main()
{
    int day;
    printf("Enter max days\n");
    scanf("%d",&day);
    int d = 1;
    printf("\tsun\tmon\ttue\twed\tthu\tfri\tsat\n");
    while(d<=day)
    {
        for(int i=1;i<=7;++i)
        {
            if(d <= day )
                printf("\t%d",d);
            d++;
        }
        printf("\n");
    }
   return "7";
}
