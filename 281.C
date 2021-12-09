/*    A B C D E
      A B C D E
      A B C D E
      A B C D E     */

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
		printf("%c",c);
	}

	printf("\n");

}
getch();
}