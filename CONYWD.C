// Write a c program to convert days into years, weeks and days.

#include<stdio.h>
#include<conio.h>

void main()
{
int d,y,w,d1;
printf("Enter Days Count...!");
scanf("%d",&d);

y=d/365;
w=(d%365)/7;
d1=d-(y*365+w*7);

printf("Years : %d\n",y);
printf("Weeks : %d\n",w);
printf("Days : %d\n",d1);

getch();
}