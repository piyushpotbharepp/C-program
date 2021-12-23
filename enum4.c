// Create a enum account having members saving,current and loan

#include <stdio.h>
#include <conio.h>

enum Accounttype{ Saving = 1, Current, Loan};

int main()
{
	enum Accounttype act;
	
	act = Current;
	
	printf("Your Account Type is : %d",act);
	
	
}