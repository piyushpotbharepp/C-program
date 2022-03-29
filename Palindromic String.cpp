/*
You have been given a String S. 
You need to find and print whether this string is a palindrome or not. 
If yes, print "YES" (without quotes), else print "NO" (without quotes).
*/

#include<stdio.h>
#include<string.h>
void main(){
	char str[1000];
	int i,j,k,count=0;
	scanf("%s",str);
	k=strlen(str);
	for(i=0;i<k;i++)
	{
		if(str[i]==str[k-(i+1)])
		count++;
	}
	if(count==k){
		printf("YES");
	}
	else{
		printf("NO");
	}
}