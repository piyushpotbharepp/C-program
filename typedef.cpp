/* 
	Understanding typedef
	------------------------------------
	-	The typedef keyword creates a type definition 
		that simplifies code and makes a program easier to read.
	-	typedef is commonly used with structures because 
		it eliminates the need to use the keyword struct 
		when declaring variables.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct{
	int age;
	int grade;
	char name[30];
}course;

int main()
{
	// Declaration of variables
	course s1;
	course s2;
}