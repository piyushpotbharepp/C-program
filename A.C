// Write a C program to perform arithmetic operations

#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,r;
char choice;
clrscr();
printf(" Press 1 for Addition\n Press 2 for subtraction\n Press 3 for Multiplication\n Press 4 for division\n Enter Choice...!");
scanf("%d", &choice);

switch(choice)
{
	case 1:
		printf(" Enter Two Numbers For Addition :\n");
		scanf("%d%d",&a,&b);
		r=a+b;
		printf("Addition of two numbers is : %d",r);
		break;
	case 2:
		printf("Enter Two Numbers For Subtraction :\n");
		scanf("%d%d",&a,&b);
		r=a-b;
		printf("Subtraction of two numbers is : %d",r);
		break;
	case 3:
		printf("Enter Two Numbers For Multiplication :\n");
		scanf("%d%d",&a,&b);
		r=a*b;
		printf("Multiplication of two numbers is : %d",r);
		break;
	case 4:
		printf("Enter Two Numbers For Division :\n");
		scanf("%d%d",&a,&b);
		r=a/b;
		printf("Division of two numbers is : %d",r);
		break;
	default:
		printf("Invalid Choice");
}
getch();
}

