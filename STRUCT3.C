//Write a program to store two book details using struct.

#include <stdio.h>
#include <conio.h>

struct book{
int bookid;
char title[10];
char author[20];
char subject[30];
float price;
}b1,b2;

int main()
{
clrscr();
b1.bookid=1999;
strcpy(b1.title,"java");
strcpy(b1.author,"Prof Sharma");
strcpy(b1.subject,"Basics Of Java");
b1.price=123.22f;

printf("\n-----------------------");
printf("\nBook Id : %d",b1.bookid);
printf("\nTitle : %s",b1.title);
printf("\nAuthor : %s",b1.author);
printf("\nSubject : %s",b1.subject);
printf("\nPrice : %f",b1.price);

b2.bookid=2002;
strcpy(b2.title,"Html");
strcpy(b2.author,"Mr. Mohan Khanna");
strcpy(b2.subject,"Web Page Development");
b2.price=163.67f;

printf("\n-----------------------");
printf("\nBook Id : %d",b2.bookid);
printf("\nTitle : %s",b2.title);
printf("\nAuthor : %s",b2.author);
printf("\nSubject : %s",b2.subject);
printf("\nPrice : %f",b2.price);

getch();
}