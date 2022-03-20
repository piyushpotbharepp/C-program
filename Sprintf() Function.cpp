/* 
	Understanding sprintf function
	------------------------------------
	A formatted string can be created with the sprintf() 
	function. 
	This is useful for the building a string from other
	data types.
	
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char info[100];
	char dept[ ] = "HR";
	int emp = 75;
	
	sprintf(info,"The %s dept has %d employees.", dept, emp);
	printf("%s\n", info);
	
	return 0;
}