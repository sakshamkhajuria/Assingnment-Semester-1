#include<stdio.h>
#include <math.h>
void main()
{
int i,j;
for(j=1;j<=5;j++)
{
for(i=1;i<=2+3*(j-1)-j;i++)
printf("%c",65);

printf("\n");

}

}