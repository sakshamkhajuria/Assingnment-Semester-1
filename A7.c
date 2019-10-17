
#include<stdio.h>
int main()
{
    int a;
    printf("Enter your digit : ");
    scanf("%d",&a);
    printf("The sum of  last two digit of your number is %d", (a%10) + ((a/10)%10));
}
