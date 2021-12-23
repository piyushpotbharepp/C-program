// Understanding enum statement using months in the year.

#include <stdio.h>
#include <conio.h>

enum month{
	Jan=1,
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
	
	m=Oct;
	
	printf("Month of the year : %d",m);
	
}