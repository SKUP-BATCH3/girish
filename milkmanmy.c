#include<stdio.h>
void main()
{
    int n,i,b10=0,b7=0,b5=0,b1=0,r1;
    printf("Enter the milk quantity in litres\n");
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        if(n%10>10)

            {
                b10++;
                n/=10;
               // printf("%d\n",b10);
            }

        else if(n%10>7)
        {
            r1=n%7;
            b7++;
            n/=7;
            // printf("%d\n",b7);
        }
        else if(n%10>5)
        {
            b5++;
            n/=5;
            // printf("%d\n",b5);
        }
        else
        {
            b1++;
             //printf("%d\n",b1);

    }


    }
    printf("total = %d",b10+b7+b5+b1);
}
