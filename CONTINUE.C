// Code for continue.

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
	{
	i++;
	continue;
	}

	printf("%d\n",i);
	i++;

}
getch();
}