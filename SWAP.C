//Write a c program to swap 2 numbers.

#include <stdio.h>
#include <conio.h>

int main()
{
int num1,num2,p,q;
clrscr();

printf("Enter two numbers to Swap: ");
printf("\nEnter First Number :");
scanf("%d",&num1);
printf("Enter Second Number :");
scanf("%d",&num2);

p=num1;
q=num2;
num1=q;
num2=p;

printf("\nFirst Number : %d",num1);
printf("\nSecond Number : %d",num2);

getch();
}
