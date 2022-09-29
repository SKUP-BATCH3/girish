#include<string.h>
#include<stdio.h>
void main()
{
    char a[5][10]={"suma"," ","Mahima"," ","po"},b[]="BRIGOSHA";
    int i,j;

      for(i=0;i<5;i++)
        for(j=0;j<10;j++)
             if(a[i][j]==' ')
             {
                printf(" a[%d] = 'c'\t",i,a[i][j]);

             }
    for(i=0;i<5;i++)
        for(j=0;j<10;j++)
             if(a[i][j]==' ')
             {
               printf("Enter a string\n");
               scanf("%s",&a[i]);
             }
    for(i=0;i<5;i++)
        for(j=0;j<10;j++)
            printf("%c",a[i][j]);





}
