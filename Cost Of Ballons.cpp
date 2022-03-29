/*
You are conducting a contest at your college. This contest consists of 
two problems and n participants. 
You know the problem that a candidate will solve during the contest.

You provide a balloon to a participant after he or she solves a problem. 
There are only green and purple-colored balloons available in a market. 
Each problem must have a balloon associated with it as a prize for solving 
that specific problem. You can distribute balloons to each participant 
by performing the following operation:

Use green-colored balloons for the first problem and purple-colored balloons 
for the second problem
Use purple-colored balloons for the first problem and green-colored balloons 
for the second problem
You are given the cost of each balloon and problems that each participant solve. 
Your task is to print the minimum price that you have to pay while purchasing 
balloons.
*/

#include<stdio.h>
int main()
{
	int t,n,g,p,a[10][2],sum1,sum2,ans;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		sum1=sum2=0;
		scanf("%d%d",&g,&p);
		scanf("%d",&n);
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<2;k++)
			scanf("%d",&a[j][k]);
		}
		for(int j=0;j<n;j++)
		{
			if(a[j][0]==1)
			sum1=sum1+g;
			if(a[j][1]==1)
			sum1=sum1+p;
		}
		for(int j=0;j<n;j++)
		{
			if(a[j][0]==1)
			sum2=sum2+p;
			if(a[j][1]==1)
			sum2=sum2+g;
		}
		ans=sum1>sum2?sum2:sum1;
		printf("%d\n",ans);
	}
} 