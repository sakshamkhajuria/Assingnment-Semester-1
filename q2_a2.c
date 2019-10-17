#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    float x,y;
    printf("enter the numbers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    x=((a-c)*(a-c))+((b-d)*(b-d));
    y=sqrt(x);
    printf("\n%f\n%f",x,y);
}
