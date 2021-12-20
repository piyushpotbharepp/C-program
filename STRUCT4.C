//Write a program store book details using struct by user.

#include <stdio.h>
#include <conio.h>

struct book{
int bookid;
char title[10];
float price;
}b1;

int main()
{
clrscr();
printf("Enter Book Id : ");
scanf("%d",&b1.bookid);
printf("Enter Title Of Book : ");
scanf("%s",&b1.title);
printf("Enter Price Of Book : ");
scanf("%f",&b1.price);

printf("\nBook Id : %d",b1.bookid);
printf("\nTitle : %s",b1.title);
printf("\nPrice : %f",b1.price);

getch();
}