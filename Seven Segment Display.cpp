#include <stdio.h>
#include <string.h>

int main()
{
	char N[100+1];
	int T, N_len, i, j, num_sticks;
	int digit_sticks[] = {
		6, 2, 5, 5, 4, 5, 6, 3, 7, 6
	};

	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		scanf("%100s", N);
		N_len = (int) strlen(N);
		for (j = 0, num_sticks = 0; j < N_len; j++)
		{
			num_sticks += digit_sticks[N[j] - '0'];
		}
		if ((num_sticks % 2) != 0)
		{
			printf("7");
			num_sticks -= 3;
		}
		for(j = 0; j < (num_sticks/2); j++)
		{
			printf("1");
		}
		printf("\n");
	}

	return 0;
} 
