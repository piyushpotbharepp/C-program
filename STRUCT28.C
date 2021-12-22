// Employee Details Using Struct as a function argument.

#include <stdio.h>
#include <conio.h>
#include <string.h>

struct employee{
int empno;
char empname[25];
}emp,emp1;

void printemployee(struct employee emp);

int main()
{
clrscr();

emp.empno=123;
strcpy(emp.empname,"Amit");
printemployee(emp);

emp1.empno=223;
strcpy(emp1.empname,"Rajesh");
printemployee(emp);

getch();
}
void printemployee(struct employee emp){
printf("\n------Employee Details-------");
printf("\nEmployee Number : %d",emp.empno);
printf("\nEmployee Name : %s",emp.empname);

}