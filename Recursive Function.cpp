/*
	Understanding Recursive Function 
	---------------------------------------
	A recursive function is one that calls itself and 
	includes a base case or exit condition for ending 
	the recursiver calls.
*/

#include <stdio.h>

int factorial(int num);

int main(){
	int x = 5;
	printf("The factoriall of %d is %d\n", x, factorial(x));
	
	return 0;
}

int factorial(int num){
	if(num == 1)
	{
		return(1);
	}
	else
	{
		return(num * factorial(num - 1));
	}
}