// Understanding stricmp function.

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
int i;
char str1[120],str2[120];
clrscr();

printf("Enter First String : ");
gets(str1);

printf("Enter Second String : ");
gets(str2);

i=stricmp(str1,str2);

if(i==0)
{
	printf("\nThe Strings Are Same..");
}
else if(i>0)
{
	printf("\nFirst String Is Greater Than Second String..");
}
else
{
	printf("\nSecond String Is Greater Than First String..");
}
getch();
}