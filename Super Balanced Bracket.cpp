/*
You are provided a balanced bracket sequence S. 
A super balanced bracket is a balanced bracket sequence 
that has the following structure:
((((.....))))

Here, all the opening brackets must contain corresponding closing 
brackets and all opening brackets must appear before any closing brackets. 
For example, (()) and ((())) are super balanced sequence but ()() and (()()) 
are not the super balanced sequence because there exists an opening bracket 
that appears after a closing bracket.

Your task is to determine the size of the largest super balanced bracket 
subsequence that is formed over all subsequences of the original sequence.
*/

#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		char s[100000];
		scanf("%s",&s);
		int count=0;
		for(int i=0;i<strlen(s)/2;i++){
			if(s[i]=='(')
			count++;
		}
		printf("%d\n",2*count);
	}
}
 