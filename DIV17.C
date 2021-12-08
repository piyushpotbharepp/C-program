/* Write a c program to calculate the sum of all numbers not divided by 17
   between two given integer numbers. */

# include<stdio.h>
# include<conio.h>

void main()
{
int a,b,i,r=0;
clrscr();
printf("Enter the First Number :");
scanf("%d",&a);
printf("Enter the Second Number :");
scanf("%d",&b);

for(i=a;i<=b;i++)
	if((i%17)!=0)
	{
		r=r+i;

	}
	printf("%d\n",r);

getch();
}
