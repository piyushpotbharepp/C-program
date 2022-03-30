/*
You are given a number N. You are required to determine 
the value of the following function:

long long int solve(N)
{
    ans=0;
    for(i=1;i<=N;i++)
    ans+=(N/i);
    return ans;
}

All divisions are integer divisions(i.e. N/i is actually floor(N/i)).
*/

#include<stdio.h>
int main()
{
	int u;
	scanf("%d",&u);
	for(int g=u;g>0;g--)
	{
		long long int j,o,as=0,q;
		scanf("%lld",&o);
		for(int z;z<1000;z++);
		q=sqrt(o);
		for(j=1;j<=q;j++)
		as+=2*(o/j);
		printf("%lld\n",as-q*q);
	}
	return 0;
} 
