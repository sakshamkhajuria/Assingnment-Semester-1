#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    printf("enter:");
    scanf("%d",&n);
    for(i=20;i<n;i++)
    {
        if(((i>20)&&(i<40))||((i>50)&&(i<80)&&(i%2==0)))
       {
       printf("\n%d",i);
       }
    }
}
