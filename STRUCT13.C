/* Create a structure employee having members
   Employee Number, Employee Name, Salary And Disignation for two employees    */

#include <stdio.h>
#include <conio.h>

struct{
int no;
char name[40];
float salary;
char dis[40];
}emp1,emp2;

int main()
{
clrscr();
emp1.no=345;
strcpy(emp1.name,"Vikram Hatwar");
emp1.salary=57689.56f;
strcpy(emp1.dis,"Software Installer");

printf("\nEmployee Details....!");
printf("\n-----------------------");
printf("\nEmployee Number : %d",emp1.no);
printf("\nEmployee Name : %s",emp1.name);
printf("\nEmployee Salary : %f",emp1.salary);
printf("\nEmployee Disignation : %s",emp1.dis);

emp2.no=348;
strcpy(emp2.name,"Mangesh Zode");
emp2.salary=38000.00f;
strcpy(emp2.dis,"Accountant");

printf("\n-------------------------");
printf("\nEmployee Number : %d",emp2.no);
printf("\nEmployee Name : %s",emp2.name);
printf("\nEmployee Salary : %f",emp2.salary);
printf("\nEmployee Disignation : %s",emp2.dis);

getch();
}


