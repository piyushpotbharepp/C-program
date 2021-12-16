//Creating an array to store the 5 subject marks and find the sum of numbers.

#include <stdio.h>
#include <conio.h>

void main()
{
int marks[5]={45,35,67,86,86};
int sum=0;
int i;
clrscr();

for(i=0;i<5;i++)
{
	sum=sum+marks[i];
	printf("\n Marks = %d", marks[i]);
}
	printf("\n");
	printf("\n Sum Of Marks = %d", sum);
getch();
}
