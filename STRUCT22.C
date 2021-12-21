// Store two book details using struct

#include <stdio.h>
#include <conio.h>
#include <string.h>

struct book{
int bookid;
char title[10];
float price;
}b1,b2;

int main()
{
clrscr();

b1.bookid=123;
strcpy(b1.title,"Java");
b1.price=123.5;

printf("\n-------------------------");
printf("\n|||||||Book Details|||||||");
printf("\n-------------------------");
printf("\nBook Id : %d",b1.bookid);
printf("\nBook Title : %s",b1.title);
printf( "\nBook Price : %f",b1.price);
printf("\n--------------------------");

b2.bookid=213;
strcpy(b2.title,"C Programming");
b2.price=232.4;

printf("\nBook Id : %d",b2.bookid);
printf("\nBook Title : %s",b2.title);
printf("\nBook Price : %f",b2.price);
printf("\n--------------------------");

getch();
}