// Understanding loop calling concept in auto

#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	
	for(i=0;i<=4;i++)
	{
		auto int j=11;
		printf("\n Value of J Inside Loop : %d",j);
	}
	
	//printf("\n Value of J Outside Loop : %d",j);     // Error of undeclared because it is called outside the loop
}