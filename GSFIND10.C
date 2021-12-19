//Find the smallest and greatest number amoung 10 numbers

#include <stdio.h>
#include <conio.h>

void main()
{
int i,n=0,g=-32768,b=32767;
clrscr();

for(i=0;i<=10;i++)
{
	printf("\nEnter A Number");
	scanf("%d",&n);

	if(n>g)
	{
		g=n;
	}
	if(n<b)
	{
	       b=n;
	}
}
printf("\nThe greatest no =%d",g);
printf("\nThe smallest no =%d",b);
getch();
}