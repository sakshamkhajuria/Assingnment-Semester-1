#include<stdio.h>
int main()
{
int i,n,a,b;
printf("enter:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    a=i%10;
    b=i/10;
    if((a+b)%7==0)
        printf("\n%d",i);
}
}



