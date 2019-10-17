#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    printf("enter any number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    if((i%3==0)||(i%7==0))
        printf("\n%d",i);
    }
}
