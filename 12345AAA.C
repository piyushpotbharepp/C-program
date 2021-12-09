/* 1 2 3 4 5
   a a a a a
   1 2 3 4 5
   a a a a a */

#include <stdio.h>
#include <conio.h>

void main()
{
int r,c;
clrscr();
for(r=1;r<=5;r++)
{
	for(c=1;c<=5;c++)
	{
		if(r%2==0)
		{
		printf("a");
		}
		else
		{
		printf("%d",c);
		}
	}
	printf("\n");
}
getch();
}