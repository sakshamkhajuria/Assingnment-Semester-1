#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter the numbers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b&&a>c&&a<d)
    printf("%d",a);

else if(b>c&&b>a&&b<c)
printf("%d",b);

else if(c>a&&c>b&&c<a&&c<d)
printf("%d",c);

else

    printf("%d",d);
}
