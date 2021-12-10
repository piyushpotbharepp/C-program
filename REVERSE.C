// Write a program to enter elements and display in reverse order.

#include <stdio.h>
#include <conio.h>

void main()
{
int a[9],i,n;
clrscr();

printf("Enter the array size :");
scanf("%d",&n);

printf("Enter the array of elements to reverse :\n");

for(i=n;i>=0;i--)
{
	scanf("%d",&a[i]);
}
printf("Reversal Of Elememts :");
for(i=0;i<=n;i++)
{
	printf("%d",a[i]);

}
getch();
}