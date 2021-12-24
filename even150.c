// Write a C program that prints all even numbers between 1 and 50 (inclusive).

#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	printf("PRINT ALL THE EVEN NUMBERS BETWEEN 1 TO 50 :");
	
	for(i=0;i<=50;i++)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
		}
	}
}