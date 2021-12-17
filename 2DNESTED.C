//Nested Loop to Handle Two Dimensional Array

#include <stdio.h>
#include <conio.h>

int main()
{
int a[5][2]={{1,2},{3,4},{5,6},{7,8},{9,10}};
int i,j;
clrscr();

for(i=0;i<=4;i++)
{
	for(j=0;j<=1;j++)
	{
		    printf("a[%d][%d] = %d\n",i,j,a[i][j]);
	}
}
getch();
}
