// Print Elements in the Array as it is by Two Dimentional Array in Matrix.

#include <stdio.h>
#include <conio.h>

void main()
{
int a[2][2],i,j;
clrscr();

printf("Enter Elements in the Array: \n");

for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		scanf("%d",&a[i][j]);
	}
}

printf("Array Elements: \n");

for(i=0;i<2
;i++)
{
	for(j=0;j<2;j++)
	{
		printf("%d  ",a[i][j]);
	}
	printf("\n");
}
getch();
}