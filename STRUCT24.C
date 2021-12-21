// Store two book details using struct by user.

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

printf("Enter Book ID : ");
scanf("%d",&b1.bookid);
printf("Ente Book Title : ");
scanf("%s",b1.title);
printf("Enter Book Price : ");
scanf("%f",&b1.price);

printf("\n-------------------------");
printf("\n|||||||Book Details|||||||");
printf("\n-------------------------");
printf("\nBook Id : %d",b1.bookid);
printf("\nBook Title : %s",b1.title);
printf( "\nBook Price : %f",b1.price);
printf("\n--------------------------");

printf("\nEnter Boook ID : ");
scanf("%d",&b2.bookid);
printf("Enter Book Title :");
scanf("%s",&b2.title);
printf("Enter Book Price : ");
scanf("%f",&b2.price);

printf("\nBook Id : %d",b2.bookid);
printf("\nBook Title : %s",b2.title);
printf("\nBook Price : %f",b2.price);
printf("\n--------------------------");

getch();
}