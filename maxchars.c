#include<stdio.h>
#include<string.h>
void main()
{
    char a[10] = "kkpppffff",max,more[10],count[10];;
    int i,j,k=0;
    for(i=0;i<10;i++)
    {

        for(j=i+1;j<10;j++)
        {
            if(a[i]==a[j])
            {
                count[k] = a[j];
                {
                    if(k>=1)
                    {
                        if(max<count[k])
                        {
                            if(count[k+1]>count[k])
                            max = count[k+1];
                            else
                            max=count[k];
                        }
                    }

                }
                k++;
            }
            }
    }
   printf("Most frequent = %c",max);

}
