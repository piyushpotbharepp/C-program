// Write a C program that reads an integer between 1 and 12 and print the month of the year in English.

#include <stdio.h>
#include <conio.h>

int main()
{
	int r;
	printf("Enter the integer between 1 to 12 to check the month : ");
	scanf("%d",&r);
	
	switch(r)
	{
		case 1:
			{
				printf("The Months is January ");
				break;
			}
		case 2:
			{
				printf("The Months is February ");
				break;
			}
		case 3:
			{
				printf("The Months is March ");
				break;
			}
		case 4:
			{
				printf("The Months is April ");
				break;
			}
		case 5:
			{
				printf("The Months is May ");
				break;
			}
		case 6:
			{
				printf("The Months is June ");
				break;
			}
		case 7:
			{
				printf("The Months is July ");
				break;
			}
		case 8:
			{
				printf("The Months is August ");
				break;
			}
		case 9:
			{
				printf("The Months is September ");
				break;
			}
		case 10:
			{
				printf("The Months is October ");
				break;
			}
		case 11:
			{
				printf("The Months is November ");
				break;
			}
		case 12:
			{
				printf("The Months is December ");
				break;
			}
		default:
			{
				printf("Wrong Input By User ! ");
			}
	}
}