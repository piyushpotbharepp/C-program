//Write a program to store two book details using struct by user.

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
printf("\nEnter Book ID : ");
scanf("%d",&b1.bookid);
printf("Enter Book Title : ");
scanf("%s",&b1.title);
printf("Enter Book Price : ");
scanf("%f",&b1.price);

printf("\n-----------------------");
printf("\nBook Id : %d",b1.bookid);
printf("\nTitle : %s",b1.title);
printf("\nPrice : %f",b1.price);
printf("\n-----------------------");

printf("\nEnter Book Id : ");
scanf("%d",&b2.bookid);
printf("Enter Book Title : ");
scanf("%s",&b2.title);
printf("Enter Book Price : ");
scanf("%f",&b2.price);

printf("\n-----------------------");
printf("\nBook Id : %d",b2.bookid);
printf("\nTitle : %s",b2.title);
printf("\nPrice : %f",b2.price);

getch();
}