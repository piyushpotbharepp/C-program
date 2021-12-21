#include <stdio.h>
#include <conio.h>
#include <string.h>

struct book{
int bookid;
char title[10];
float price;
}b1;

int main()
{
clrscr();

b1.bookid=123;
strcpy(b1.title,"Java");
b1.price=123.5;

printf("\nBook Id : %d",b1.bookid);
printf("\nBook Title : %s",b1.title);
printf( "\nBook Price : %f",b1.price);

getch();
}