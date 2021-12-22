// Understanding Register 

#include <stdio.h>
#include <conio.h>

void dislaynum();

int main()
{
	register int num1=20;
	int num2;
	
	printf("\nNumber One : %d",num1);
	printf("\nNumber Two : %d",num2);
}

void displaynum()
{
	// printf("\nNumber One : %d",num1);	// error of undeclared because is also works as auto
}