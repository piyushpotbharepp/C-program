// Write a C program that reads an integer and check the specified range where it belongs. 
// Print an error message if the number is negative and greater than 80.

#include <stdio.h>
#include <conio.h>

void main()
{
	int num;
	printf("Enter the number to check the range : ");
	scanf("%d",&num);
	
	if(num>=0 && num<=20)
	{
		printf("Number belongs to [ 0 - 20 ] range");
	}
	else if(num>=21 && num<=40)
	{
		printf("Number belongs to [ 21 - 40 ] range");
	}
	else if(num>=41 && num<=60)
	{
		printf("Number belongs to [ 41 - 60 ] range");
	}
	else if(num>=61 && num<=80)
	{
		printf("Number belongs to [ 61 - 80 ] range");
	}
	else 
	{
		printf("Number belongs to outside the range");
	}
}