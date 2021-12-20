/* Create a structure employee having members Employee Number,
   Employee Name, Salary And Disignation for two employees by user.   */

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
printf("\nEnter Employee Number : ");
scanf("%d",&emp1.no);
printf("Enter Employee Name : ");
scanf("%s",&emp1.name);
printf("Enter Employee Salary : ");
scanf("%f",&emp1.salary);
printf("Enter Employee Disignation : ");
scanf("%s",&emp1.dis);

printf("\nEmployee Details....!");
printf("\n-----------------------");
printf("\nEmployee Number : %d",emp1.no);
printf("\nEmployee Name : %s",emp1.name);
printf("\nEmployee Salary : %f",emp1.salary);
printf("\nEmployee Disignation : %s",emp1.dis);
printf("\n-----------------------");

printf("\nEnter Employee Number : ");
scanf("%d",&emp2.no);
printf("Enter Employee Name : ");
scanf("%s",&emp2.name);
printf("Enter Employee Salary : ");
scanf("%f",&emp2.salary);
printf("Enter Employee Disignation : ");
scanf("%s",&emp2.dis);

printf("\n-------------------------");
printf("\nEmployee Number : %d",emp2.no);
printf("\nEmployee Name : %s",emp2.name);
printf("\nEmployee Salary : %f",emp2.salary);
printf("\nEmployee Disignation : %s",emp2.dis);

getch();
}


