/*
You are given a number n.

A supernatural number is a number whose product of digits 
is equal to n, and in this number there is no digit 1.

Count the number of supernatural numbers for a given n.
*/


#include<stdio.h>

int main()

{

	int n ,sum =1,c=0;




	scanf("%d",&n);



	for(int i = 1 ; i<=322222; i++)

	{

		if(i==100)

		i = i + (10*2);

		else if(i==1000)

		i = i + (2*10*10);

		else if(i==10000)

		i = i + (2*10*10*10);

		else if(i==100000)

		i = i + (2*10*10*10*10);




		sum = 1;

		if(i%10==1)

		continue;




		int temp = i;

		int k = 0 ;




		while(temp>0)

		{

			int rem = temp%10;

			if(rem==1)

			{

				k = 1;

				break;

			}

			sum = sum*rem;




			temp/=10;

		}




		if(sum==n && k==0)

		{

			c++;

		}

	}

	printf("%d",c);




	return 0;

} 