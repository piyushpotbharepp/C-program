//Write a code to check Vowel Or Not.

#include <stdio.h>
#include <conio.h>

void main()
{
char ch;
clrscr();
printf("Enter Any Alphabet to Check Vowel or Not : ");
scanf("%c",&ch);

switch(ch)
{
case 'A':
	printf("\nYour Alphabet is Vowel");
	break;

case 'E':
	printf("\nYour Alphabet is Vowel");
	break;

case 'I':
	printf("\nYour Alphabet is Vowel");
	break;

case 'O':
	printf("\nYour Alphabet is Vowel");
	break;

case 'U':
	printf("\nYour Alphabet is Vowel");
	break;

case 'a':
	printf("\nYour Alphabet is Vowel");
	break;

case 'e':
	printf("\nYour Alphabet is Vowel");
	break;

case 'i':
	printf("\nYour Alphabet is Vowel");
	break;

case 'o':
	printf("\nYour Alphabet is Vowel");
	break;

case 'u':
	printf("\nYour Alphabet is Vowel");
	break;

default:
	printf("\nYour Alphabet is Consonent");

}
getch();
}