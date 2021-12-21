//Structure as a function for employee details.

#include <stdio.h>
#include <conio.h>
#include <string.h>

struct employee{
int empno;
char empname[10];
}emp1,emp2;

void printemployee(struct employee emp1);

int main()
{
clrscr();

emp1.empno=232;
strcpy(emp1.empname,"Kumar");
printemployee(emp1);

emp2.empno=643;
strcpy(emp2.empname,"Mehar");
printemployee(emp1);

}

void printemployee(struct employee emp1){
printf("\n=====================");
printf("\nEmployee Details");
printf("\n=====================");
printf("\nEmployee Number : %d",emp1.empno);
printf("\nEmployee Name : %s",emp1.empname);
printf("\n---------------------");
printf("\nEmployee Number : %d",emp2.empno);
printf("\nEmployee Name : %s",emp2.empname);
printf("\n---------------------");

getch();
}