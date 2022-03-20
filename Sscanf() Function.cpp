/* 
	Understanding sscanf function
	------------------------------------
	Another useful function is sscanf() for scanning 
	a string for values.
	The function reads values from a string and stores 
	them at the corresponding variable addresses.
	
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char info[ ] = "Snoqualmie WA 13190";
	char city[50];
	char state[50];
	int population;
	
	sscanf(info, "%s %s %d", city, state, &population);
	printf("%d people live in %s, %s.", population, city, state);
	
	return 0;
}