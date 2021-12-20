/*  Create a structure array of 10 student having members like
    Roll Number, Name, City and State and ask data from user.               */

#include <stdio.h>
#include <conio.h>

struct{
int roll;
char name[30];
char city[25];
char state[30];
}stu1[10];

int main()
{
int i;
clrscr();

for(i=0;i<=9;i++)
{
printf("\nEnter Student Roll Number : ");
scanf("%d",&stu1[i].roll);
printf("Enter Student Name : ");
scanf("%s",&stu1[i].name);
printf("Enter Student City : ");
scanf("%s",&stu1[i].city);
printf("Enter Student State : ");
scanf("%s",&stu1[i].state);
printf("\n----------------------");
}

printf("\nStudent Details...!");
printf("\n----------------------");

for(i=0;i<=9;i++)
{
printf("\nStudent Roll Number : %d",stu1[i].roll);
printf("\nStudennt Name : %s",stu1[i].name);
printf("\nStudent City : %s",stu1[i].city);
printf("\nStudent State : %s",stu1[i].state);
printf("\n----------------------");
}


getch();
}


