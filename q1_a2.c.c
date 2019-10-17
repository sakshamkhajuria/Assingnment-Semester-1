#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float s,d,area;
    printf("enter the sides of the triangle:");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    d=s*(s-a)*(s-b)*(s-c);
    area=sqrt(d);
    printf("\n%f%f",s,area);
}
