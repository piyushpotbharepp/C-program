/*   				*				
				*	*
			*	*	*			*/

#include <stdio.h>
void main()
{
int r,c,s;
for(r=1;r<=3;r++)
{
	for(c=0;c<=40-r;c++)
	{
		printf(" ");
	}
	for(s=1;s<=r;s++)
	{
		printf("*");
	}
	printf(" \n");
}
getch();
}