/*   	E D C B A 
		E D C B
		E D C
		E D
		E					*/


#include <stdio.h>
{
int r,c;
for(r='A';r<='E';r++)
{
	for(c='E';c>=r;c--)
	{
		printf("%c",c);
	}
	printf(" \n");
}
getch();
}