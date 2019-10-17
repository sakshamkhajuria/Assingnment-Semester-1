#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,h,k,complexh,complexk;
printf("enter the numbers:");
scanf("%f%f%f",&a,&b,&c);
d=(b*b-4*a*c);
if(d>0)
{
    printf("roots are real");
    h=(-b+sqrt(d))/2*a;
    k=(-b-sqrt(d))/2*a;
    printf("%f\n%f",h,k);
}
else if(d=0)
{
    printf("equal roots");
    h=-b/2*a;
    k=-b/2*a;
    printf("%f\n %f",h,k);
}
else if(d<0)
{

printf("imaginary");
    h=-b/2*a;
    complexh=(sqrt(d))/2*a;
    k=-b/2*a;
    complexk=(sqrt(d))/2*a;
    printf("%f\n %f %f %f",h,complexh,k,complexk);
}
}
