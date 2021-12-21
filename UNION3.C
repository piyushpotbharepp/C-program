// Memory size occupied by union

#include <stdio.h>
#include <conio.h>

union data{
int i;
float f;
char str[20];
}data;

int main()
{
clrscr();
printf("Memory size occupied by data : %d\n",sizeof(data));
//return 0;
getch();
}
