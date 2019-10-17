#include<stdio.h>
int main()
{
    int a;
    printf("Enter your digit : ");
    scanf("%d",&a);
    printf("after doubling the last digit your number : %d", a + (a%10) );
}

