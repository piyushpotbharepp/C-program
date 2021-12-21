// Structure as a function argument for Employee Structure.

#include <stdio.h>
#include <conio.h>
#include <string.h>

struct employee{
int empno;
char empname[10];
}emp;

void printemployee(struct employee emp);

int main()
{
clrscr();

emp.empno=123;
strcpy(emp.empname,"Amit");
printemployee(emp);
}

void printemployee(struct employee emp){
printf("\n========================");
printf("\nEmployee Details Are :");
printf("\n========================");
printf("\nEmployee Number : %d",emp.empno);
printf("\nEmployee Name : %s",emp.empname);
printf("\n------------------------");

getch();
}