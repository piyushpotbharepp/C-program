/*
You are given a positive integer N.f(N) is the greatest odd divisor of N. 

Find the sum (f(1) + f(2) + ..+ f(N)) % M.
*/


#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int n,m;
		scanf("%ld%ld",&n,&m);
		long int sum=0;
		while(n>0)
		{
			sum+=((n/2+n%2)%m)*((n/2+n%2)%m);
			sum=sum%m;
			n=n/2;
		}
		printf("%ld\n",sum);
	}
	return 0;
} 