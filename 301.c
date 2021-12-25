/*   				A				
				B	B
			C	C	C			*/

#include <stdio.h>
void main()
{
int r,c,s;
for(r='A';r<='C';r++)
{
	for(c=0;c<=100-r;c++)
	{
		printf(" ");
	}
	for(s='A';s<=r;s++)
	{
		printf("%c",r);
	}
	printf(" \n");
}
getch();
}