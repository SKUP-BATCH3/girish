#include<iostream>
namespace std;
void main()
{
    int speed;
    printf("Enter your speed\n");
    scanf("%d",&speed);

    if(speed>80)
        printf("Big ticket");
    else if(speed<60)
        printf("No ticket");
    else
        printf("Small ticket\n");
}
