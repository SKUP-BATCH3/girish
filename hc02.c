//02
#include<stdio.h>
int main(){
int even1=0,odd1=1,even2=2,odd2=3,even3=4,odd3=5,temp,temp1,temp2;
temp=even1;
even1=odd1;
odd1=temp;

temp1=even2;
even2=odd2;
odd2=temp1;

temp2=even3;
even3=odd3;
odd3=temp2;

printf("even1=%d\t odd1=%d\n",even1,odd1);
printf("even2=%d\t odd2=%d\n",even2,odd2);
printf("even3=%d\t odd3=%d\n",even3,odd3);
}
