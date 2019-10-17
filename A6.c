#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter your digit : ");
    scanf("%d",&a);
b=a/10;
c = b % 10;
    printf("The second last digit of your number is %d",c);
}
