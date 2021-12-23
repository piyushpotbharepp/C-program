#include <stdio.h>
#include <conio.h>

enum grade{
	M1=90,
	M2=55,
	M3=88,
	M4=89,
	M5=87
};

int main()
{
	enum grade g;
	
	g=M3;
	
	printf("Print Marks Obtained : %d",g);
	return 0;
}