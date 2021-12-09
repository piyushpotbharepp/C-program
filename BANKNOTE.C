/* Write a c program to read an amount ( integer value )
   and break the amount into smallest possible number of bank notes. */


#include <stdio.h>
#include <conio.h>

void main()
{
int amt,note;
clrscr();
printf("Enter Total Amount :");
scanf("%d",&amt);

note=amt/10;
printf("Smallest Possible Notes :%d",note);

getch();
}