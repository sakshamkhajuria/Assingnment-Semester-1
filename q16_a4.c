#include<stdio.h>
int main()
{
int i,n,a;
printf("enter:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    if((((i>=10)&&(i<=29))||((i>=40)&&(i<=59))||((i>=70)&&(i<=89)))&&(i%2==0))
        printf("\n%d",i);
}
}





