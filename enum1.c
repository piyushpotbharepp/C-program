// Understanding enum

#include <stdio.h>
#include <conio.h>

enum weekdays{
	Sunday = 1,
	Monday = 2,
	Tuesday = 3,
	Wednesday = 4,
	Thursday = 5,
	Friday = 6,
	Saturday = 7
}w;

int main()
{
	w = Monday;
	
	printf("\nThe Value Of w : %d",w);
	return 0;
}