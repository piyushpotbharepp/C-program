// Sum of Natural Numbers Using Recursion

#include <stdio.h>
#include <conio.h>

int sum(int n);

int main()
{
	int number,result;
	
	printf("Enter Number : ");
	scanf("%d",&number);
	
	result=sum(number);
	
	printf("Sum Of Number : %d",result);
	return 0;
}

int sum(int n){
	if(n!=0)
	{
		return n + sum(n-1);
	}
	else
	{
		return n;
	}
}