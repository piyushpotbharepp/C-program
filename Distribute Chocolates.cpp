/*
You have c number of chocolates that you want to distribute between your n students. 
The intelligence level of the students is not the same, therefore, you decide to 
distribute the chocolates in such a way that a smarter student gets strictly more
chocolates than the ones who are less smarter.

The difference between the chocolates received by any two adjacent students must be 
exactly one. Formally, if the least intelligent student gets k chocolates, then others 
must get k + 1, k + 2, k + 3, .... At the same time, your task is to minimize the number
of chocolates that are left (if any) after distributing those among students. 
Determine the minimum number of chocolates left.
*/

#include<stdio.h>
int main()

{

	int t;

	scanf("%d",&t);

	while(t--)

	{

		unsigned long long int c , n,given;

		scanf("%llu%llu",&c,&n);

		given = (n*(1+n))/2;

		if(given>c)

		{

			printf("%llu\n",c);

		}

		else

		{

			c = c - given ;

			printf("%llu\n",c%n);

		}
	}
	return 0 ; 
}