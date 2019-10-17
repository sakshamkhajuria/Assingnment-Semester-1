#include<stdio.h>
int main()
{
int i,n,a;
printf("enter:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    a=i%10;
    if((a>=5)&&(a<=8))
        printf("\n%d",i);
}
}



