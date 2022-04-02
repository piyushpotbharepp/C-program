/*
You like the sound of rain only if the sound ranges from l to r units. 
Every cloud makes s unit of sound. Determine the minimum and the maximum 
number of clouds that can produce the sound in the provided range.
*/
#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int l,r,s;
		scanf("%d%d%d",&l,&r,&s);
		int min,max;
		min=l/s;
		if(min*s < l)
		min++;

		max=r/s;
		if(min<=max)
		printf("%d %d\n",min,max);
		else
		printf("-1 -1\n");
	}
}