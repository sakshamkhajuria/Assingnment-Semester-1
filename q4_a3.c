#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a*a==b*b+c*c)
    printf("right angled");
else
    printf("not right angled");
}
