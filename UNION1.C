//Understand Union Data Allocation

#include <stdio.h>
#include <conio.h>

union data{
int num1;
float num2;
char ch;
}d1;

int main()
{
clrscr();

d1.num1=576;
printf("\nNumber one : %d",d1.num1);

d1.num2=54.56f;
printf("\nNumber two : %f",d1.num2);

d1.ch='P';
printf("\nCharacter : %c",d1.ch);

printf("\n-----------------------");
printf("\n----Garbage Values----");
printf("\n------------------------");
printf("\nNumber one : %d",d1.num1);
printf("\nNumber two : %f",d1.num2);

getch();
}
