/* Create a structure product having members
   product id, product name and price   */

#include <stdio.h>
#include <conio.h>

struct{
int id;
char name[20];
float price;
}pro1;

int main()
{
clrscr();
pro1.id=577;
strcpy(pro1.name,"Cream");
pro1.price=566.6f;

printf("\nProduct Details ...!");
printf("\n-----------------------");
printf("\nProduct Id : %d",pro1.id);
printf("\nProduct Name : %s",pro1.name);
printf("\nProduct Price : %f",pro1.price);

getch();
}