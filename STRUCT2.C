//Write a program to store two book details using struct.

#include <stdio.h>
#include <conio.h>

struct book{
int bookid;
char title[10];
float price;
}b1,b2;

int main()
{
clrscr();
b1.bookid=124;
strcpy(b1.title,"java");
b1.price=123.22f;

printf("\n-----------------------");
printf("\nBook Id : %d",b1.bookid);
printf("\nTitle : %s",b1.title);
printf("\nPrice : %f",b1.price);

b2.bookid=125;
strcpy(b2.title,"Html");
b2.price=163.67f;

printf("\n-----------------------");
printf("\nBook Id : %d",b2.bookid);
printf("\nTitle : %s",b2.title);
printf("\nPrice : %f",b2.price);

getch();
}