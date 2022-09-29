#include<stdio.h>
void main()
{
    int n;
    printf("Enter an integer\n");
    scanf("%d",&n);
    (n%3==0&&n%5)?printf("FIZZBUZZ\n"):((n%5==0)?printf("BUZZ\n"):(n%3==0)?printf("FIZZ\n"):printf("%d!",n));
}
