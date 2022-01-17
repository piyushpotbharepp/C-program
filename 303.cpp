/*   				5 5 5 5 5
					  4	4 4	4
					  	3 3 3
						  2 2
						    1		*/

#include <stdio.h>

int main()
{
int r,c,s;
for(r=5;r>=1;r--)
{
	for(c=0;c<=40-r;c++)
	{
	printf(" ");
	}
	for(s=1;s<=r;s++)
	{
		printf("%d",r);
	}
	printf(" \n");
}
}