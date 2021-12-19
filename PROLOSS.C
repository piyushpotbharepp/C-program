//Write a c program for idea of Profit or Loss

#include <stdio.h>
#include <conio.h>

int main()
{
float cp,sp;
clrscr();

printf("Enter Cost price : ");
scanf("%f",&cp);
printf("Enter Selling price :");
scanf("%f",&sp);

if(sp>cp)
{
	printf("\nProfit of : %f",sp-cp);
}
else
{
	printf("\nLoss of : %f",cp-sp);
}
getch();
}
