/*
	Understanding Input In C Language - gets()
	------------------------------------------------------
*/
#include <stdio.h>

int main()
{
	char a[100];
	gets(a);
	printf("You entered : %s", a);
	return 0;
}
