/*
A number  is said to be special if the sum of its digits is divisible by 4.
For a given integer , find a number  such that:
*/

#include<stdio.h>
int main()
{
	int T,i,j,count=0,x,sum=0;
	scanf("%d",&T);
	int a[T];
	for(i=0;i<T;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<T;i++)
	{
		count=0;
		for(j=a[i];count==0;j++)
		{
			int c=j;
			sum=0;
			while(c>0)
			{
				x=c%10;
				sum+=x;
				c=c/10;
			}
			if(sum%4==0)
			{
				count++;
				printf("%d\n",j);
			}

		}
	}
	return 0;
} 
