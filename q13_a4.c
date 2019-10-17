#include<stdio.h>
int main()
{
int i,n,a;
printf("enter:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    if((i/10)%3!=0)
        printf("\n%d",i);
}
}



