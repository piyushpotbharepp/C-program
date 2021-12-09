#include <stdio.h>
#include <conio.h>

void main()
{
int fuel,avg,dis;
clrscr();
printf("Enter Total Distance Travelled :");
scanf("%d",&dis);
printf("Enter Spent Fuel :");
scanf("%d",&fuel);

avg=dis/fuel;
printf("The Average of Bike is :%d",avg);

getch();
}