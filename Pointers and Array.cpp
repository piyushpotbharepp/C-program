/*
	Understanding Pointer ans Arrays 
	-----------------------------------------
	- 	Pointers are especially useful with arrays.
		An array declaration reserves a block of contiguous 
		memory addresses for its elements. With pointers, 
		we can point to the first element and then use address 
		arithmetic to traverse the array.
	- 	Pointers are declared using the * symbol and take the form.
*/

#include <stdio.h>
int main()
{
	int a[5] = {22,33,44,55,66};
	int *p = NULL;
	int i;
	
	ptr = a;
	
	for(i=0;i<5;i++){
		printf("%d", *(ptr + i));
	}
}