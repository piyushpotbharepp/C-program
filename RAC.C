//Write a c program to calculate circumference and area.

#include <stdio.h>
#include <conio.h>

void main()
{
float a,c,r;
clrscr();

r=2.3;
a=3.4*r*r;
c=2*3.14*r;

printf("\nRadius : %f",r);
printf("\nCircumference : %f",c);
printf ("\nArea : %f",a);

getch();
}