// Union memory allocation

#include <stdio.h>
#include <conio.h>
#include <string.h>

union data{
int i;
float f;
char str[20];
}data;

int main()
{
clrscr();

data.i=10;
data.f=220.5;
strcpy(data.str,"C Programmimg");

printf("data.i : %d\n",data.i);
printf("data.f : %f\n",data.f);
printf("data.str : %s\n",data.str);

/* Here, i and f members of union got corrupted because the final value
   assigned the memory location and this is the reason that the value of
   str member is getting printed very well   */

getch();
}
