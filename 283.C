/*    5 4 3 2 1
      5 4 3 2 1
      5 4 3 2 1
      5 4 3 2 1
      5 4 3 2 1     */

#include <stdio.h>
#include <conio.h>

void main()
{
int r,c;
clrscr();
for(r=5;r>=1;r--)
{
	for(c=5;c>=1;c--)
	{
		printf("%d",c);
	}

	printf("\n");

}
getch();
}