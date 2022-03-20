/*
	Understanding Pointer and FUnctions
	-----------------------------------------
	- 	Pinters generally expand the possibilities for functions. 
		No longer are we limited to returning one value. 
		With pointer parameters, your functions can alter actual data 
		rather than a copy of data.
	- 	To change the actual values of variables, the calling statement 
		pass addresses to the pointer parameters in a function. 
	- 	Pointers are declared using the * symbol and take the form.
*/

#include <stdio.h>

void swap(int *num1, int *num2);

int main()
{
	int x = 25;
	int y = 100;
	
	printf("x is %d, y is %d\n", x, y);
	swap(&x, &y);
	printf("x is %d, y is %d\n", x, y);
	
	return 0;
	
}
void swap(int *num1, int *num2)
{
	int temp;
	
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}