// Creating a structure array of three elements of book structure.

#include <stdio.h>
#include <conio.h>

struct{
int bookid;
char title[20];
}book1[3];

int main()
{
int i;
clrscr();

for(i=0;i<=2;i++)
{
printf("Enter Book Id : ");
scanf("%d",&book1[i].bookid);
printf("Enter Book Title : ");
scanf("%s",&book1[i].title);
}
printf("\n------------------------------------------");
printf("\n-------Book Details Of Three Books--------");
printf("\n------------------------------------------");

for(i=0;i<=2;i++)
{
printf("\n\nBook Id : %d",book1[i].bookid);
printf("\nBook Title : %s",book1[i].title);
}
getch();
}