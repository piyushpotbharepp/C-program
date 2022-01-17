/*   				A B C D E				
					A B C D 
				    A B C
					A B
					A			*/

#include <stdio.h>
void main()
{
int r,c,s='A';
for(r='E';r>='A';r--)
{
	for(c='A';c<=r;c++)
	{
	printf("%c",c);
	}
	printf(" \n");
}
getch();
}