//Write a code for employee having members code and name using union.

#include <stdio.h>
#include <conio.h>
#include <string.h>

union employee{
int code;
char name[20];
}emp;

int main()
{
clrscr();

printf("\nEnter Employee Code : ");
scanf("%d",&emp.code);

printf("Enter Employee Name : ");
scanf("%s",&emp.name);

printf("\n--------------------------------");
printf("\n|||||||||Garbage Value|||||||||");
printf("\n--------------------------------");
printf("\nCode Of Employee : %d",emp.code);
printf("\n--------------------------------");
printf("\n\nName Of Employee : %s",emp.name);

getch();
}