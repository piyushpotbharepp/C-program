// Write a c program to display 1 to 10 numbers on the screen.

#include <stdio.h>
#include <conio.h>

void main()
{
int i;
clrscr();
for (i=10;i>=1;i--)
{
	printf("%d\n",i);
}
getch();
}