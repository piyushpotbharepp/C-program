// Write a c program that accepts three integers and find the maximum of three

#include <stdio.h>
#include <conio.h>

void main()
{
int a,b,c;
clrscr();
printf("ENTER THREE NUMBERS TO FIND THE MAXIMUM ONE :\n");
scanf("%d%d%d",&a,&b,&c);

if(a>b)
{	if(a>b)
		printf("Maximum Number : %d",a);

	else
		printf("Maximum Number : %d",b);

}
else
{    	if(b>c)
		printf("Maximum Number : %d",b);

	else
		printf("Maximum Number : %d",c);
}
getch();
}