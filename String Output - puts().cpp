/* 
	Understanding String Output ( puts() )
	-------------------------------------
	String output is handled with the fputs(), puts()
	and printf() functions.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char first_name[25];
	int age;
	printf("Enter your first name : \n");
	gets(first_name);
	
	puts(first_name);
	return 0;
}