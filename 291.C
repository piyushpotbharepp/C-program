/* 1 1 1 1 1
   2 2 2 2
   3 3 3
   4 4
   5        */

#include <stdio.h>
#include <conio.h>

void main()
{
int r,c;
clrscr();
for(r=1;r<=5;r++)
{
	for(c=5;c>=r;c--)
	{
		printf("%d",r);
	}
	printf(" \n");
}
getch();
}