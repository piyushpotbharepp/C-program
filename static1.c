// Understanding static

#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	
	for(i=0;i<=4;i++)
	{
		static int num1 =5;
		int num2=10;
		
		num1++;
		num2++;
		
		printf("\nValue of static num1 : %d",num1);
		printf("\nValue of non statis num2 : %d",num2);
		printf("\n--------------------------------------");
	}
}