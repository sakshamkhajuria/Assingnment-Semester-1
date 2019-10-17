#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d,e,f;
    float y;
    printf("enter the numbers:");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    y=(a*d+c*f+e*b-a*f-e*d-b*c)/2;
    printf("\n%f",y);
}
