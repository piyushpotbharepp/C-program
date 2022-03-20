/* 
	Understanding String Input ( scanf() )
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
	printf("Enter your first name and age : \n");
	scanf("%s %d", &first_name, &age);
}