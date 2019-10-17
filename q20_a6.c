#include<stdio.h>
void main()
{
int i,j;
for(j=1;j<=6;j++)
{
for(i=65;i<=64+j;i++)
printf("%c",i+j-1);

printf("\n");

}

}