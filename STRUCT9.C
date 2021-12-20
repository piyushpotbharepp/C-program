/*  Create a structure student having members like
    Roll Number, Name, City and State.               */

#include <stdio.h>
#include <conio.h>

struct{
int roll;
char name[30];
char city[25];
char state[30];
}stu1;

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

getch();
}


