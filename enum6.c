// weekdays usnig numu switch case.

#include <stdio.h>
#include <conio.h>

enum weekdays{
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

int main()
{
	enum weekdays day;
	
	day=Thursday;
	
	switch(day){
		case Monday:
			printf("Today IS Monday");
			break;
		case Tuesday:
			printf("Today IS Tuesday");
			break;
		case Wednesday:
			printf("Today IS Wednesday");
			break;
		case Thursday:
			printf("Today IS Thursday");
			break;
		case Friday:
			printf("Today IS Friday");
			break;
		case Saturday:
			printf("Today IS Saturday");
			break;
		case Sunday:
			printf("Today IS Sunday");
			break;
}
return 0;
}