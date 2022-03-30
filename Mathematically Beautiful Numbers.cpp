/*
While playing a mental math game, you realize that the number k 
is mathematically beautiful.

You then realize that the number x can be mathematically beautiful 
if it is represented as a sum of a sequence where each element 
is a power of k and all the numbers in the sequence are different.
*/

#include <stdio.h>

int main()
{
	int T, k, flag, i, rem;
	long long int x;
	scanf("%d", &T);

	for(i=0; i<T; i++)
	{
		scanf("%lld %d",&x , &k );
		flag = 0;

		while(x)
		{
			rem = x % k ;
			if(rem != 0 && rem != 1)
			{
				flag = 1;
				break;
			}
			x = x/k ;
		}

		if(flag == 1)
		printf("NO\n");
		else
		printf("YES\n");
	}
}
