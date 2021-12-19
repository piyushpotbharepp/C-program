//Write a c program to find Greater number from three numbers

#include <stdio.h>
#include <conio.h>

int main()
{
int num1,num2,num3;
clrscr();

printf("Enter three numbers to find the Greater One : ");
printf("\nEnter First Number :");
scanf("%d",&num1);
printf("Enter Second Number :");
scanf("%d",&num2);
printf("Enter Third Number :");
scanf("%d",&num3);

if((num1>num2) && (num1>num3))
{
	printf("\nGreater Number : %d",num1);
}
else if((num2>num1) && (num2>num3))
{
	printf("\nGreater Number : %d",num2);
}
else
{
	printf("\nGreater Number : %d",num3);
}
getch();
}
