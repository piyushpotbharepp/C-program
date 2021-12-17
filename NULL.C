// Program to understand the Null Character

#include <stdio.h>
#include <conio.h>

int main()
{
char name[10]={'A','M','I','T','A','B','H'}; // After char 'H' '\0' would automatically inserted at the end for termination.
int i;
clrscr();

for(i=0;i<=9;i++)
{
	printf("%c ",name[i]);
}
getch();
}