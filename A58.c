#include<stdio.h>
void main()
{	int x,y;
	for(y=1;y<=10;y++)
	{
	    for(x=1;x<=20;x++)
	    if((x+y<=7)||((x>11)&&(y<=8)))
	    {printf("0");}
	
	    else
	   {printf("*");}	    
	
           printf("\n");

	}










}
