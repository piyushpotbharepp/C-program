/*
	Understanding Input In C Language - scanf()
	------------------------------------------------------
	scanf scans input that matches format specifiers.
*/
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	printf("You entered : %d", a);
	return 0;
}
