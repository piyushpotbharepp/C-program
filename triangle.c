// Write a C program that reads three floating values and check if it is possible to make a triangle with them. 
// Also calculate the perimeter of the triangle if the said values are valid.

#include <stdio.h>
#include <conio.h>

void main()
{
	float x,y,z,P;
	printf("Enter the 1 st side of the triangle : ");
	scanf("%f",&x);
	printf("Enter the 2 nd side of the triangle : ");
	scanf("%f",&y);
	printf("Enter the 3 rd side of the triangle : ");
	scanf("%f",&z);
	
	if(x<(y+z) && y<(x+z) && z<(x+y))
	{
		P=x+y+z;
		printf("Perimeter Of The Triange : %.1f",P);
	}
	else
	{
		printf("Not Possible To Create A Triangle.");
	}
}