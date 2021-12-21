//Write a code for employee having members code and name using union.

#include <stdio.h>
#include <conio.h>
#include <string.h>

union employee{
int code;
char name[20];
}emp;

int main()
{
clrscr();

emp.code=2002;
strcpy(emp.name,"Vishal Kumar");

printf("\nCode Of Employee : %d",emp.code);
printf("\nName Of Employee : %s",emp.name);

getch();
}