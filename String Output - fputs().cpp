/* 
	Understanding String Input ( fputs() )
	-------------------------------------
	String output is handles with the fputs(),
	puts() and printf() functions.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char first_name[25];
	int age;
	printf("Enter your first name : \n");
	fgets(first_name, 25, stdin);
	
	fputs(first_name, stdout);
}