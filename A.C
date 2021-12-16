// Print Elements in the Array as it is by one Dimentional Array

#include <stdio.h>
#include <conio.h>

void main()
{
int a[5],i;
clrscr();

printf("Enter Elements in the Array");

for(i=0;i<=4;i++)
{
	scanf("%d",&a[i]);
}

printf("Array Elements: ");

for(i=0;i<=4;i++)
{
	printf("%d",a[i]);
}
getch();
}