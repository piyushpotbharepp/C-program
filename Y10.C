/* 1 0 1 0
   1 0 1
   1 0
   1        */

#include <stdio.h>
#include <conio.h>

void main()
{
int r,c;
clrscr();
for(r=4;r>=1;r--)
{
	for(c=1;c<=r;c++)
	{
		printf("%d",c%2);
	}
	printf("\n");
}
getch();
}