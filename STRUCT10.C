/*  Create a structure student having members like
    Roll Number, Name, City and State for two students.               */

#include <stdio.h>
#include <conio.h>

struct{
int roll;
char name[30];
char city[25];
char state[30];
}stu1,stu2;

int main()
{
clrscr();
stu1.roll=45;
strcpy(stu1.name,"Vimal Daga");
strcpy(stu1.city,"Mumbai");
strcpy(stu1.state,"Maharashtra");

printf("\nStudent Details...!");
printf("\n----------------------");
printf("\nStudent Roll Number : %d",stu1.roll);
printf("\nStudennt Name : %s",stu1.name);
printf("\nStudent City : %s",stu1.city);
printf("\nStudent State : %s",stu1.state);

stu2.roll=56;
strcpy(stu2.name,"Vishal Kumar");
strcpy(stu2.city,"Pune");
strcpy(stu2.state,"Maharashtra");

printf("\n-----------------------");
printf("\nStudent Roll Number : %d",stu2.roll);
printf("\nStudent Name : %s",stu2.name);
printf("\nStudent City : %s",stu2.city);
printf("\nStudent State : %s",stu2.state);

getch();
}


