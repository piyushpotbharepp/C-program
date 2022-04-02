/*
You are given a polygon of N sides with vertices numbered from 1, 2, ..., N. 
Now, exactly 2 vertices of the polygons are colored black and remaining are 
colored white. 
You are required to find the number of triangles denoted by A such that:

The triangle is formed by joining only the white-colored vertices of 
the polygon.
The triangle shares at least one side with the polygon.
*/

#include <stdio.h>
int main()
{
	int t;
	long long int n,b1,b2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %lld %lld",&n,&b1,&b2);
		long double sum=0;
		int z=0;
		if(b1>b2)
		z=b1-b2;
		else
		z=b2-b1;
		int v1=z-1;
		int v2=n-z-1;
		if(v1>0&&v2>0)
		sum=(v1+v2-2)*(n-4);
		else
		sum=(v1+v2-1)*(n-4);
		if(v1>2)
		sum=sum-v1+2;
		if(v2>2)
		sum=sum-v2+2;
		printf("%.Lf\n",sum);
	}
	return 0;
}