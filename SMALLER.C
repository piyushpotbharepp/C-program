//Write a c program to find Smaller number

#include <stdio.h>
#include <conio.h>

int main()
{
int num1,num2;
clrscr();

printf("Enter two numbers to find the Smaller One : ");
printf("\nEnter First Number :");
scanf("%d",&num1);
printf("Enter Second Number :");
scanf("%d",&num2);

if(num1<num2)
{
	printf("\nSmaller Number : %d",num1);
}
else
{
	printf("\nSmaller Number : %d",num2);
}
getch();
}
