#include<stdio.h>
int main()
{
  int a,b,c,p;
  printf("Enter a : ");
  scanf("%d",&a);
    printf("Enter b : ");
  scanf("%d",&b);
    printf("Enter c : ");
  scanf("%d",&c);
    printf("Enter p: ");
  scanf("%d",&p);

  printf("You want to find ax^2 + bx + c at x=p");
  printf("/nAnswer is %d", a*p*p  + b*p  +  c);
}

