/* A
   A B
   A B C
   A B C D  */

#include <stdio.h>
#include <conio.h>

void main()
{
int r,c;
clrscr();
for(r='A';r<='D';r++)
{
	for(c='A';c<=r;c++)
	{
		printf("%c",c);
	}
	printf(" \n");
}
getch();
}