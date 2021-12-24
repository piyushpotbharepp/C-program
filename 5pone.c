// Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers.

#include <stdio.h>
#include <conio.h>

int main()
{
	float number[5];
	int i,pno=0,nno=0;
	
	printf("Enter the 1 st Number : ");
	scanf("%f",&number[0]);
	printf("Enter the 2 nd Number : ");
	scanf("%f",&number[1]);
	printf("Enter the 3 rd Number : ");
	scanf("%f",&number[2]);
	printf("Enter the 4 th Number : ");
	scanf("%f",&number[3]);
	printf("Enter the 5 th Number : ");
	scanf("%f",&number[4]);
	
	for(i=0;i<=4;i++)
	{
		if(number[i]>0)
		{
			pno++;
		}
		else if(number[i]<0)
		{
			nno++;
		}
	}
	printf("\nPositive Numbers : %d",pno);
	printf("\nNegative Numbers : %d",nno);
}