#include<stdio.h>
void main()
{
    char a[6] = "Eminem",b[6];
    int i,p,*j,*q;
    j = &i;
    q = &p;
    for(*j=0,*q=6;*j<=6,*q>0;(*j)++,(*q)--)
        b[*q]=a[*j];
    for(*j=0;*j<=6;(*j)++)
        printf("%c",b[*j]);

}
