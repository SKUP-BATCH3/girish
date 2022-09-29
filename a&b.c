#include<stdio.h>
void main()
{
    int a,b,k;
    printf("Enter the value of a,b and k\n");
    scanf("%d %d %d",&a,&b,&k);

    if(k>a&&k>b)
    {
        if((a|b)>(a^b))
        {
            a=a|b;
            printf("a|b=%d\n",a);
        }
        else
        {
            a=a^b;
            printf("a^b=%d\n",a);
        }
    }
    else
    {
        printf("a or b is exceeding k\n");
    }
    printf("Result = %d",a&b);
}
