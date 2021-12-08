/* D
   D C
   D C B
   D C B A */

#include <stdio.h>
#include <conio.h>

void main()
{
int r,c;
clrscr();
for(r='D';r>='A';r--)
{
	for(c='D';c>=r;c--)
	{
		printf("%c",c);
	}
	printf("\n");
}
getch();
}