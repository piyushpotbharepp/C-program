// Write a c program to convert days into years, months and days.

#include<stdio.h>
#include<conio.h>

void main()
{
int d,y,m,d1;
printf("Enter Days Count...!");
scanf("%d",&d);

y=d/365;
m=(d-y*365)/30;
d1=d-(y*365+m*30);

printf("Years : %d\n",y);
printf("Months : %d\n",m);
printf("Days : %d\n",d1);

getch();
}