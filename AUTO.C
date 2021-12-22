// Understand Auto

#include <stdio.h>
#include <conio.h>

void displynum();

int main()
{
int num1=25;             // By default it is auto
auto int num2=30;
clrscr();

printf("\nNumber One : %d",num1);
printf("\nNumber Two : %d",num2);
displynum();
}


void displynum{
printf("\nNumber One : %d",num1);   //Error since num1 and num2 not declared
printf("\nNumber Two : %d",num2);
}