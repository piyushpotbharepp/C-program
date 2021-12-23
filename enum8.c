// Understanding enum name should be different

#include <stdio.h>
#include <conio.h>

int main()
{
	enum status{success, fail};
	enum boolen{fail, pass};
	
	printf("The value of success is %d",success);
	
	return 0;
}