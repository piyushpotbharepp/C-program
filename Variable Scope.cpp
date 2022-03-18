/* 	
	Understanding Variable Scope 
	----------------------------------
	Local Variable - Variables declared in a function are local to that block 
	of code and cannot be referred to outside the function.
	Global Varible - Variables declared outside all functions are global to
	the entire program.
*/

#include <stdio.h>
int global1 = 0;
int main ()
{
	int local1, local2;
	
	local1 = 5;
	local2 = 10;
	
	global1 = local1 + local2;
	
	printf("%d \n",global1);
	
	return 0;
}