/* Write a c program that reads five numbers
   And gives sum of all odd values between them. */

# include<stdio.h>
# include<conio.h>

void main()
{
int n1,n2,n3,n4,n5,total=0;
clrscr();
printf("Enter the First Number  :");
scanf("%d",&n1);
printf("Enter the Second Number :");
scanf("%d",&n2);
printf("Enter the Third Number  :");
scanf("%d",&n3);
printf("Enter the Fourth Number :");
scanf("%d",&n4);
printf("Enter the Fifth Number  :");
scanf("%d",&n5);

if(n1%2!=0)
{
	total=total+n1;
}
if(n2%2!=0)
{
	total=total+n2;
}
if(n3%2!=0)
{
	total=total+n3;
}
if(n4%2!=0)
{
	total=total+n4;
}
if(n5%2!=0)
{
	total=total+n5;
}

printf("Sum of all Odd Values : %d", total);
getch();
}
