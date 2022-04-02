/*
The shape of a network is a big equilateral triangle as shown in the 
following picture and it consists of many small equilateral triangles 
of different sizes. Each point represents a computer and you have to 
choose a rectangle such that each of its corners is a computer and 
the horizontal edges are parallel with the lower edge of the network
(big triangle) The size of the network is the number of small triangles 
on each edge of the big triangle. You need to count the number of rectangles 
that can be selected from the network.

*/

#include<stdio.h>
int countOdd(int n)
{
	int coun = 0, m, j, i;
	for (i = n - 2; i >= 1; i--)
	{
		if (i & 1)
		{
			m = (n - i) / 2;
			j = (i * (i + 1)) / 2;
			coun += j * m;
		}
		else
		{
			m = ((n - 1) - i) / 2;
			j = (i * (i + 1)) / 2;

			coun += j * m;
		}
	}
	return coun;
}

int countEven(int n)
{
	int coun = 0, m, j, i;
	for (i = n - 2; i >= 1; i--)
	{
		if (i & 1)
		{
			m = ((n - 1) - i) / 2;
			j = (i * (i + 1)) / 2;
			coun += j * m;
		}
		else
		{
			m = (n - i) / 2;
			j = (i * (i + 1)) / 2;
			coun += j * m;
		}
	}
	return coun;
}

int main()
{
	int n;
	scanf("%d",&n);
	if (n & 1)
	// cout << countOdd(n);
	printf("%d",countOdd(n));
	else
	// cout << countEven(n);
	printf("%d",countEven(n));
	return 0;
} 