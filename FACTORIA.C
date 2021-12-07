/* Write a program to enter any number from keyboard
  and find the factorial of the entered number.*/

#include<stdio.h>
#include<conio.h>

void main()
{
int num,r=1,i;
clrscr();

printf("Enter the number:");
scanf("%d",&num);
i=1;

while(i<=num)
{
r=r*i;
i++;
}
printf("%d",r);
getch();
}