/* 
	Understanding String Input ( fgets() )
	-------------------------------------
	To retrive a line of text or other string from thr user 
	C provides the scanf(), gets() and fget() functions.
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
}