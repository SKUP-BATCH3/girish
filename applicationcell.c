#include<stdio.h>
#include<string.h>
int main()
{
    int time,sleep;
    char person[20];

    printf("Enter the time in 24 hrs only, no minutes\n");
    scanf("%d",&time);

    printf("Are you asleep?,type 0 if no 1 if yes\n");
    scanf("%d",&sleep);

    if(sleep==1)
    {
        printf("Do not Receive\n");
        return 0;
    }
    else
    {
        if(time<10&&time>6)
        {
            printf("Who is calling?\n");
            scanf("%s",person);

            if(!strcmp("mom",person))
            {
                printf("Receive\n");
                return 1;
            }
            else
            {
                printf("Do not receive\n");
                return 0;
            }
        }
        else
        {
            printf("Receive\n");
            return 1;
        }
    }
}
