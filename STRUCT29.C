/* Create a structure student having members roll number, name,
   course fees pass this structure to print the structure.    */

#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student{
int sturoll;
char stuname[25];
float stufees;
}stu;

void printstudent(struct student stu);

int main()
{
clrscr();

stu.sturoll=123;
strcpy(stu.stuname,"Amit");
stu.stufees=19500.3;
printstudent(stu);

getch();
}
void printstudent(struct student stu){
printf("\n----------------------------");
printf("\n------Student Details-------");
printf("\n----------------------------");
printf("\nStudent Roll Number : %d",stu.sturoll);
printf("\nStudent Name : %s",stu.stuname);
printf("\nStudent Fees : %f",stu.stufees);
printf("\n----------------------------");

}