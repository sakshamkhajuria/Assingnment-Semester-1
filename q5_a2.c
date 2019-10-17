#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d,e;
    float y;
    printf("enter the numbers:");
    scanf("%d%d",&a,&b);
    printf("enter the line no.:");
    scanf("%d%d%d",&c,&d,&e);
    y=((a*c+b*d+e)/sqrt(c*c+d*d));
    printf("\n%f",y);
}
