//Write a c program to find Greater number

#include <stdio.h>
#include <conio.h>

int main()
{
int num1,num2;
clrscr();

printf("Enter two numbers to find the Greater One : ");
printf("\nEnter First Number :");
scanf("%d",&num1);
printf("Enter Second Number :");
scanf("%d",&num2);

if(num1>num2)
{
	printf("\nGreater Number : %d",num1);
}
else
{
	printf("\nGreater Number : %d",num2);
}
getch();
}
