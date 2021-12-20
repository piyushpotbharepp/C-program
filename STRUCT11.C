/*  Create a structure student having members like
    Roll Number, Name, City and State for two students from user.               */

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
printf("\nEnter Student Roll Number : ");
scanf("%d",&stu1.roll);
printf("Enter Student Name : ");
scanf("%s",&stu1.name);
printf("Enter Student City : ");
scanf("%s",&stu1.city);
printf("Enter Student State : ");
scanf("%s",&stu1.state);

printf("\nStudent Details...!");
printf("\n----------------------");
printf("\nStudent Roll Number : %d",stu1.roll);
printf("\nStudennt Name : %s",stu1.name);
printf("\nStudent City : %s",stu1.city);
printf("\nStudent State : %s",stu1.state);
printf("\n----------------------");

printf("\nEnter Student Roll Number : ");
scanf("%d",&stu2.roll);
printf("Enter Student Name : ");
scanf("%s",stu2.name);
printf("Enter Student City : ");
scanf("%s",stu2.city);
printf("Enter Student State : ");
scanf("%s",&stu2.state);

printf("\n-----------------------");
printf("\nStudent Roll Number : %d",stu2.roll);
printf("\nStudent Name : %s",stu2.name);
printf("\nStudent City : %s",stu2.city);
printf("\nStudent State : %s",stu2.state);

getch();
}


