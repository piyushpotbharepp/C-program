// Store Book Details Using Struct

#include <stdio.h>
#include <conio.h>
#include <string.h>

struct books{
char title[50];
char author[50];
char subject[50];
int bookid;
}book1,book2;

int main()
{
clrscr();

strcpy(book1.title,"C Programming");
strcpy(book1.author,"Nuha Ali");
strcpy(book1.subject,"C Programming Tutorial");
book1.bookid=768;

strcpy(book2.title,"Telecom Billing");
strcpy(book2.author,"Zara Ali");
strcpy(book2.subject,"Telecom Billing Tutorial");
book2.bookid=678;

printf("\n------------------------------");
printf("\n||||||||B00K DETAILS||||||||");
printf("\n------------------------------");

printf("\nBook One Title : %s",book1.title);
printf("\nBook One Author : %s",book1.author);
printf("\nBook One Subject : %s",book1.subject);
printf("\nBook One ID : %d",book1.bookid);
printf("\n-------------------------------");

printf("\nBook Two Title : %s",book2.title);
printf("\nBook Two Author : %s",book2.author);
printf("\nBook Two Subject : %s",book2.subject);
printf("\nBook Two ID : %d",book2.bookid);
printf("\n-------------------------------");

getch();
}
