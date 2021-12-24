// Write a program to display number divisible by 4

#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	for(i=0;i<=19;i++)
	{
		if(i%4==0)
		{
			printf("\nNumber Divisible by 4 : %d",i);
		}
	}
}