// Write a c program to convert seconds into hours, minutes and seconds.

#include<stdio.h>
#include<conio.h>

void main()
{
int s,h,m,s1;
printf("Enter Seconds Count...!");
scanf("%d",&s);

h=s/3600;
m=(s-h*3600)/60;
s1=s-(h*3600+m*60);

printf("Hour : %d\n",h);
printf("Minute : %d\n",m);
printf("Second : %d\n",s1);












getch();
}