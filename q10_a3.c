#include<stdio.h>
void main()
{
    int a,b,c,d,x, sum = 0;
    printf("enter the numbers");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&x);
    if(a == x)
        sum += 1;
    if(b == x)
        sum += 1;
    if(c == x)
        sum += 1;
    if(d == x)
        sum += 1;
    printf("%d numbers are equal to x.", sum);
}
