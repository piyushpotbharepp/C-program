// Understanding calling variable in extern 

#include <stdio.h>
#include <conio.h>

int num1;
void display();

int main()
{
	extern int num1;
	printf("\nValue of extern num1 : %d",num1);
	
	num1=23;
	printf("\nValue of extern num1 : %d",num1);
	
	display();
}

void display(){
	printf("\nValue of extern num1 outside main : %d",num1);
}