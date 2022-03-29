/*
You are given two arrays a1, a2, ....., an and b1, b2, ....., bn. In each step, 
you can set ai = ai - b1 if ai >= bi. 
Determine the minimum number of steps that are required to make all a's equal.
*/

#include<stdio.h>

int main()
{
	int n,k,steps=0;
	scanf("%d",&n);
	int i,a[n],b[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n-1;i++)
	{
		if(a[i]<a[i+1])
		{
			k=a[i];
			a[i]=a[i+1];
			a[i+1]=k;
			k=b[i];
			b[i]=b[i+1];
			b[i+1]=k;
		}
	}
	for(i=0;i<n-1;i++)
	{
		while(a[n-1]!=a[i])
		{
			if(a[i]<=0)
			{
				printf("-1");
				exit(0);
			}
			if(a[n-1]<a[i])
			{
				a[i]=a[i]-b[i];
				steps++;
			}
			if(a[n-1]>a[i])
			{
				a[n-1]=a[n-1]-b[n-1];
				steps++;
			}
		}
	}
	printf("%d",steps);
	return 0;
}