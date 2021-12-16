//Example to show declaration, assignment annd accessing arrays.

#include <stdio.h>
#include <conio.h>

void main()
{
int n[5];
int i,j;
clrscr();

for(i=0;i<10;i++)
{
	n[i]=i+100;
}
for(j=0;j<10;j++)
{
	printf("Elements[%d] = %d\n",j,n[j]);
}
getch();
}
