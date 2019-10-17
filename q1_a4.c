#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    printf("enter any number:");
    scanf("%d",&n);
    for(i=20;i<n;i=i+2)
    {
        printf("\n%d",i+2);
    }
}
