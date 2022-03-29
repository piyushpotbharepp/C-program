/*
A group of students wants to visit a tour in some city X. 
In total, the group has N boys and M girls. To do this, 
they need to stay in a hotel.

Calculate the number of rooms you need to book in the hotel, 
if each hotel room has K seats, provided that the boys can not 
live with the girls in the same room.
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int t, n, m, k;
	scanf(" %d", &t);

	for(int i = 0; i < t; i++)
	{
		scanf(" %d %d %d", &n, &m, &k);
		int res = (int)ceil((double)n / k) + (int)ceil((double)m / k);
		printf("%d\n", res);
	}

	return 0;
} 
