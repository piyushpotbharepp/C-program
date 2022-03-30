/*
You are given an undirected tree G with N nodes. 
Every node is assigned a value denoted by A[i].
*/

#include <stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);

	while (t--){
		long long int n, q;
		scanf("%lld" "%lld", &n, &q);

		long long int a[n];
		long long int odd=0;
		long long int even=0;

		for (int i=1; i<=n; i++){
			scanf("%lld", &a[i]);
			if (a[i]%2){
				odd++;
			} 
			else {
				even++;
			}
		}

		for (long long int i=1; i<n; i++){
			long long int a, b;
			scanf("%lld" "%lld", &a, &b);
		}

		while (q--){
			long long int i, val,sum;
			scanf("%lld" "%lld", &i, &val);

			if (a[i]%2){
				odd--;
			} 
			else {
				even--;
			}

			a[i] = val;
			if (a[i]%2){
				odd++;
			} 
			else {
				even++;
			}

			sum = odd*(odd+1)/2 + even*(even+1)/2;

			printf("%lld ", sum);
		}

		printf("\n");
	}

	return 0;
} 