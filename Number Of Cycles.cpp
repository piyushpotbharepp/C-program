/*
You are given an N-sided regular polygon. 
You have connected the center of the polygon with all the vertices, 
thus dividing the polygon into N equal parts.

Your task is to find the count of simple cycles that exist in the modified 
structure of the polygon.
*/

#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		printf("%lld\n",n*(n-1) + 1);
	}
} 