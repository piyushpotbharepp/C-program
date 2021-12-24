// Write a C program that reads two integers and checks whether they are multiplied or not.

#include <stdio.h>
#include <conio.h>

int main() {
	int  x, y;
    printf("Input the first number: "); 
    scanf("%d", &x);
    printf("Input the second number: ");
    scanf("%d", &y);
  
    if(x > y) 
	{
		int temp;
		temp = x;
		x = y;
		y = temp;
	}
	
	if((y % x)== 0) 
	{
		printf("Multiplied!\n");
	} 
	else 
	{
		printf("Not Multiplied!\n");
	}
	
	return 0;
}