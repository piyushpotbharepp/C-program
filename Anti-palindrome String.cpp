/*
You are given a string S containing only lowercase alphabets. 
You can swap two adjacent characters any number of times (including 0).

A string is called anti-palindrome if it is not a palindrome. 
If it is possible to make a string anti-palindrome, 
then find the lexicographically smallest anti-palindrome. 
Otherwise, print -1.
*/

#include<stdio.h>
#include<string.h>
int main()
{
	int T=0,i=0,f=0;
	scanf ("%d",&T);
	while(T>0)
	{
		char s[200000];
		int a[26]={};
		scanf ("%s",s);
		int l=strlen(s);
		for(i=0;i<l;++i)
		{
			a[s[i]-97]+=1;

		}
		i=0;
		for(int j =0;j<26;++j)
		{
			while(a[j]>0)
			{
				s[i++]=j+97;
				--a[j];
			}
		}
		for(int i=0;i<l/2;++i)
		{
			if(s[i]!=s[l-1-i])
			{
				printf ("%s\n",s);
				f=1;
				break;
			}
			else
			f=0;
		}
		if(f==0)
		printf ("-1\n");
		--T;
	}
}
