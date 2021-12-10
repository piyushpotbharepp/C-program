// Write a program to print elements in the array using for loop.

#include <stdio.h>
#include <conio.h>

void main()
{
int a[5],i;
clrscr();
printf("Enter Five Elements to Print\n");

for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
printf("Output of given input..!");
printf(" %d\n",a[i]);
}

getch();
}