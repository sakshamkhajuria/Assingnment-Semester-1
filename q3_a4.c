#include<stdio.h>
#include<math.h>
int main()
{
    int i=0,n;
    printf("enter any number:");
    scanf("%d",&n);
    while(i<n)
    {
        i=i+1;
        if(i%2==0)
        printf("\n%d",i);
    }
    while((i>n)&&(i<100))
    {
        i=i+1;
        if(i%2==1)
        printf("\n%d",i);
    }
}
