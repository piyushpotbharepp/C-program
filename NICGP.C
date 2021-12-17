/* Program to read nickname and store in array and
   print it using gets and puts.    */

#include <stdio.h>
#include <conio.h>

void main()
{
char nic[20];
clrscr();
puts("Enter Your Nickname : ");
gets(nic);
puts(nic);

getch();
}
