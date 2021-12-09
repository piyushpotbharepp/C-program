/*    E E E E E
      D D D D D
      C C C C C
      B B B B B
      A A A A A     */

#include <stdio.h>
#include <conio.h>

void main()
{
int r,c;
clrscr();
for(r='E';r>='A';r--)
{
	for(c='E';c>='A';c--)
	{
		printf("%c",r);
	}

	printf("\n");

}
getch();
}