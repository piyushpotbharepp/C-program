//Write a code to find out given number is prime or not.

#include <stdio.h>
#include <conio.h>

void main()
{
int num,i,j=2;
clrscr();

printf("Enter Number To Check Prime Or Not : ");
scanf("%d",&num);

i=0;
while(i<=num-1)
{
	if(num%j==0)
	{
		printf("Number Is Not A Prime Number..");
		break;
	}
	i++;
}
if(num==i)
{
	printf("It Is A Prime Number..");
}
getch();
}