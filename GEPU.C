// Program to understand gets() & puts() function

#include <stdio.h>
#include <conio.h>

int main()
{
char name1[20];
char name2[20];
clrscr();

puts("Enter First Name...");   // It works as printf
gets(name1);                   // It works as scanf
puts(name1);                   // It works as printf

puts("Enter Last Name...");    // It works as printf
gets(name2);                   // It works as scanf
puts(name2);                   // It works as printf

getch();
}
