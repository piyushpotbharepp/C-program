/* Write a program to reads two numbers and divide the first number by second number.
  If the division is possible print "Division is Possible".*/

#include <stdio.h>
#include <conio.h>

void main()
{
int a,b;
clrscr();
printf("Enter First number for division :");
scanf("%d",&a);
printf("Enter Second number for division :");
scanf("%d",&b);

if(a%b==0)
{
printf("Division is Possible");
}
else
{
printf("Division is Not Possible");
}
getch();
}