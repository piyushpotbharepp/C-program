// Code for break.

#include <stdio.h>
#include <conio.h>

void main()
{
int i;
clrscr();
i=1;
while(i<=10)
{
	if(i==5)
	break;
	printf("%d",i);
	i++;
}
getch();
}