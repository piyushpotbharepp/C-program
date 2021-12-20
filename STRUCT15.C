/* Create a structure employee having members Employee Number,
   Employee Name, Salary And Disignation for three employees by user.   */

#include <stdio.h>
#include <conio.h>

struct{
int no;
char name[40];
float salary;
char dis[40];
}emp1,emp2,emp3;

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
printf("\n--------------------------");

printf("\nEnter Employee Number : ");
scanf("%d",&emp3.no);
printf("Enter Employee Name : ");
scanf("%s",&emp3.name);
printf("Enter Employee Salary : ");
scanf("%f",&emp3.salary);
printf("Enter Employee Disignation : ");
scanf("%s",&emp3.dis);

printf("\n--------------------------");
printf("\nEmployee Number : %d",emp3.no);
printf("\nEmployee Name : %s",emp3.name);
printf("\nEmployee Salary : %f",emp3.salary);
printf("\nEmployee Disignation : %s",emp3.dis);

getch();
}


