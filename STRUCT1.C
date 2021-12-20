//Write a program to store book details using struct.

#include <stdio.h>
#include <conio.h>

struct book{
int bookid;
char title[10];
float price;
}b1;

int main()
{
b1.bookid=124;
strcpy(b1.title,"java");
b1.price=123.22f;

printf("\nBook Id : %d",b1.bookid);
printf("\nTitle : %s",b1.title);
printf("\nPrice : %f",b1.price);

getch();
}