//04
#include<stdio.h>
int main(){
int b,i,r,r1;
printf("enter the number of bits:\n");
scanf("%d",&b);
printf("enter the input:\n");
scanf("%d",&i);
r=(1<<b^i);
printf("flip=%d",r);
}
