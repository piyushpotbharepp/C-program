/*
A robot's initial position is (0,0) and it can only move along X-axis. 
It has N moves to make and in each move, it will select one of 
the following options:

Go to (X-1,0) from (X,0)
Go to (X+1,0) from (X,0)
Remain at its current position
Your task is to calculate Sum of(abs(X) + abs(Y)) for all reachable (X,Y).
*/

#include<stdio.h>
main()
{
	int T;
	long long int N;
	scanf("%lld",&T);
	int i;
	for(i=0;i<T;i++)
	{
		scanf("%lld",&N);
		printf("%lld\n",N*(N+1));
	}
}