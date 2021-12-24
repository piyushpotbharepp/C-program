/* Write a c program to calculate the distance between two points  */
   
#include <stdio.h>
#include <conio.h>

void main()
{
	float p1,p2,dis;
	printf("Enter the First Point : ");
	scanf("%f",&p1);
	printf("Enter the Second Point : ");
	scanf("%f",&p2);
	
	if(p1>p2)
	{
		dis=p1-p2;
	}
	else
	{ 
		dis=p2-p1;
	}
	
	printf("Distance Between Two Points : %f",dis);
	
}