#include<stdio.h>
int main()
{
int i,n,a;
printf("enter:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    if((((i/10)%2==0)&&(i%2!=0))||((i/10%2!=0)&&(i%2==0)))
        printf("\n%d",i);
}
}





