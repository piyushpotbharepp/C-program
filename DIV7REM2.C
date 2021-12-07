/* Write a program to find all numbers which dividing it by 7
  & the remainder is equal to 2 or 3 between two given integers.*/

#include <stdio.h>
#include <conio.h>

void main()
{
int a,b,i;
clrscr();
printf("Enter First Integer :");
scanf("%d",&a);
printf("Enter Second Integer :");
scanf("%d",&b);

for(i=a;i<=b;i++)
{
	if((i%7)==2||(i%7)==3)
	{
		printf("%d\n",i);
	}
}
getch();
}