// Understanding enum 

#include <stdio.h>
#include <conio.h>

int main()
{
	// The values assigned to the enum names must be integral constant, i.e., it should not be of other types such string, float, etc
	enum fruits{Mango = 1, Strawberry = 1, Apple};  
	
	printf("\nThe Value Of Mango is : %d",Mango);
	
	// If we provide the values to the enum name in any order and the unassigned names will get the default value as the previous one plus one.
	printf("\nThe Value Of Apple is : %d",Apple);
	
	return 0;
}

