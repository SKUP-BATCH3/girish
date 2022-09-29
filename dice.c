//dice return sum, if either of dice is six print 1,print increment of dice if both are equal,we have used extern here;
#include<stdio.h>
#include"ext.c"
extern char a[20];
extern int dice();
extern int dice1,dice2;
/*void main()
{
    printf("Enter value of dice 1\n");
    scanf("%d",&dice1);

    printf("Enter value of dice 2\n");
    scanf("%d",&dice2);
    static int r = dice();
    printf("sum = %d\n",r);
}*/
int dice()
{
    if(dice1>6||dice1<1||dice2>6||dice2<1)
        printf("Enter correct i/p\n");
    else
    {
        if(dice1==dice2)
        {
            printf("%d\t",++dice1);
            dice1 = --dice1;
        }
        if(dice1==6||dice2==6)
            printf("dice = 1\t");

        register int sum = dice1+dice2;
       // printf("%d\t%d\t%d\n",dice1,dice2,sum);
        return sum;
    }
}

