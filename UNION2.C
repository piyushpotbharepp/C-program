//Understand Union Data Allocation

#include <stdio.h>
#include <conio.h>

union data{
int num1;
float num2;
char ch[10];
}d1;

void main()
{
clrscr();

d1.num1=22;
d1.num2=22.5;
strcpy(d1.ch,"Piyu"); // Only Last value will execute

printf("\nNumber one : %d",d1.num1);
printf("\nNumber two : %f",d1.num2);
printf("\nCharacter : %s",d1.ch);

printf("\n-----------------------");
printf("\n----Garbage Values----");
printf("\n------------------------");
printf("\nNumber one : %d",d1.num1);
printf("\nNumber two : %f",d1.num2);

getch();
}
