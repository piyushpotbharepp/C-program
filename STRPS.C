// Read and write string in c using printf and scanf function

#include <stdio.h>
#include <conio.h>

int main()
{
char name[20];
clrscr();
printf("Enter Name : ");
scanf("%s",&name);
printf("%s",name);

getch();
}