//Creating an array to store the 5 subject marks

#include <stdio.h>
#include <conio.h>

void main()
{
int marks[5]={45,35,67,86,86};
int i;

for(i=0;i<5;i++)
{
	printf("\n Marks = %d", marks[i]);
}
getch();
}
