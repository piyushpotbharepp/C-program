/* Create a structure product having members
   product id, product name and price for two products.   */

#include <stdio.h>
#include <conio.h>

struct{
int id;
char name[20];
float price;
}pro1,pro2;

int main()
{
clrscr();
printf("\nEnter Product Id : ");
scanf("%d",&pro1.id);
printf("Enter Product Name : ");
scanf("%s",&pro1.name);
printf("Enter Product Price : ");
scanf("%f",&pro1.price);

printf("\nProduct Details ...!");
printf("\n-----------------------");
printf("\nProduct Id : %d",pro1.id);
printf("\nProduct Name : %s",pro1.name);
printf("\nProduct Price : %f",pro1.price);
printf("\n-----------------------");

printf("\nEnter Product Id : ");
scanf("%d",&pro2.id);
printf("Enter Product Name : ");
scanf("%s",&pro1.name);
printf("Enter Product Price : ");
scanf("%f",&pro1.price);

printf("\n------------------------");
printf("\nProduct Id : %d",pro2.id);
printf("\nProduct Name : %s",pro2.name);
printf("\nProduct Price : %f",pro2.price);

getch();
}