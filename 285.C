/*    E D C B A
      E D C B A
      E D C B A
      E D C B A     */

#include <stdio.h>
#include <conio.h>

void main()
{
int r,c;
clrscr();
for(r='D';r>='A';r--)
{
	for(c='E';c>='A';c--)
	{
		printf("%c",c);
	}

	printf("\n");

}
getch();
}