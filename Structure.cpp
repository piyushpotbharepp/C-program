/* 
	Understanding Structure
	------------------------------------
	-	A structure is a user-defined data type that groups 
		related variables of different data types.
	-	A structure declaration includes the keyword struct, 
		a structure tag for referencing the structure, 
		and curly braces { } with a list of variable declarations 
		called members.
	
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student{
	int age;
	int grade;
	char name[30];
};

int main()
{
	// Declaration of variables
	struct student s1;
	struct student s2;
}