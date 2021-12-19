//To Store Data in Double Dimension.

#include <stdio.h>
#include <conio.h>

void main()
{
int a[3][4],i,j;
clrscr();

for(i=0;i<=2;i++)
{
	for(j=0;j<=3;j++)
	{
		printf("\nEnter the Values : %d%d",i,j);
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<=3;i++)
{
	for(j=0;j<=2;j++)
	{
		printf("\t%d",a[i][j]);
	 }
	 printf("\n");
}
getch();
}