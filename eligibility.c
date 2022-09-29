//cot off in maths = 65,phy = 55, chem = 50 and either maths+phy+chem  = 190 or math + phy = 140
#include<stdio.h>
void main()
{
    int m,p,c;
    printf("Enter the marks of maths,physics and chemistry\n");
    scanf("%d%d%d",&m,&p,&c);

    if(m>=65&&p>=55&&c>=50)
    {
        if(m+p+c>=190||m+p>=140)
            printf("Eligible\n");
        else
             printf("Not eligible\n");
    }
    else
        printf("Not eligible\n");
}
