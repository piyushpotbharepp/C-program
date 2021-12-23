// Print month number accoring to the month given using for loop in enum.

#include <stdio.h>
#include <conio.h>

enum month{
	Jan =1,
	Feb,
	Mar,
	Apr,
	May,
	Jun,
	Jul,
	Aug,
	Sep,
	Oct,
	Nov,
	Dec
};

int main()
{
	enum month m;
	
	int i;
	
	for(i=Jan;i<=Dec;i++)
	{
		printf("\n Month Number : %d",i);
	}
}