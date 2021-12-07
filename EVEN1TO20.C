//Write a program to display even numbers from 1 to 20.

#include <stdio.h>
#include <conio.h>

void main()
{
int i,r;
clrscr();

for(i=1;i<=20;i++)
{
	if(i%2==0)
	{
	printf("%d\n",i);
	}
}
getch();
}