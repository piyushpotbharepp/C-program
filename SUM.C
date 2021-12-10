// Write a program to perfprm Addition of Sum of all elements.

#include <stdio.h>
#include <conio.h>

void main()
{
int a[10],i,n,add=0;
clrscr();
printf("Enter Size Of Array to Perform Addition : \n");
scanf("%d",&n);
printf("Enter the Elements : \n");

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	add=add+a[i];
}
printf("Addition of Numbers in Array : %d\n",add);


getch();
}