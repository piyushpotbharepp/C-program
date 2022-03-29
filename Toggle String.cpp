/*
You have been given a String S consisting of uppercase and lowercase 
English alphabets. You need to change the case of each alphabet in this String. 
That is, all the uppercase letters should be converted to lowercase and 
all the lowercase letters should be converted to uppercase. 
You need to then print the resultant String to output.
*/

#include<string.h>
void main()
{
	char s[100],c;
	int i,x,l;
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<=l-1;i++)
	{
		x=s[i];
		if(x<=90)
		x=x+32;
		else
		x=x-32;
		c=x;
		s[i]=c;
	}
	printf("%s",s);
} 