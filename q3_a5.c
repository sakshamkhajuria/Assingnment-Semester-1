#include<stdio.h>
#include<math.h>
void main()
{
int a,b;
    for(a=0;a<=4;a++)
    {
        for(b=1;b<=10;b++)
        {
        if(a%2==0)
            printf("0*");
        }
        for(b=1;b<=10;b++)
        {
        if(a%2!=0)
            printf("*0");
        }
        printf("\n");
    }
}
