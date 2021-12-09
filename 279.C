/*    A A A A A
      B B B B B
      C C C C C
      D D D D D     */

#include <stdio.h>
#include <conio.h>

void main()
{
int r,c;
clrscr();
for(r='A';r<='D';r++)
{
	for(c='A';c<='E';c++)
	{
		printf("%c",r);
	}

	printf("\n");

}
getch();
}