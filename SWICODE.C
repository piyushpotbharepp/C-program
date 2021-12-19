#include <stdio.h>
#include <conio.h>

void main()
{
char code;
clrscr();
printf("Enter Any Color Code : ");
scanf("%c",&code);

switch(code)
{
case 'b':
	printf("\nYou Have Selected Blue");
	break;

case 'g':
	printf("\nYou Have Selected Green");
	break;

case 'r':
	printf("\nYou Have Selected Red");
	break;

case 'w':
	printf("\nYou Have Selected White");
	break;

default:
	printf("\nUndefined Color");

}
getch();
}