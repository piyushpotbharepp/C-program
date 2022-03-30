/*
You have an N x M matrix, where 1 to N are rows 
and 1 to M are columns.

Element at the intersection of ith row and jth column 
is equal to F(i + j), where F(x) is equal to the number of 
prime divisors of x.

Determine the sum of all the elements of the matrix.
*/

#include <stdio.h>
#include <math.h>

#define MAX 1000001
#define MAX_DIVISORS 2000002
#define PRIME_MARKED(A) (prime_marked[A]==0? 1: prime_marked[A])
int prime_marked[MAX_DIVISORS];
int sum_no_prime_divisors[MAX_DIVISORS];

int number_of_prime_divisor(int num) {
	if (num == 0) {
		return 0;
	}

	if (num == 1) {
		return 0;
	}

	if (num == 2) {
		return 1;
	}

	int divisors = 0;

	if (num%2 == 0) {
		divisors++;
	}
	while (num%2 == 0) {
		num /= 2;
	}

	if (num == 1) {
		return divisors;
	}

	for (int i=3; i<sqrt(num); i += 2) {
		if (num%i == 0) {
		divisors++;
		}
		while (num%i == 0) {
			num /= i;
		}
	}

	if (num > 2) {
		divisors++;
	}
	return divisors;
}

void mark_prime_numbers(int max_divs) {
	for (int i=2; i<max_divs/2; i++) {
		for (int j=2; j*i<max_divs; j++) {
			if (prime_marked[i] == 0) {
				prime_marked[i*j]++;
			}
		}
	}
}


void prepare() {
	mark_prime_numbers(MAX_DIVISORS);
}

int main() {
	prepare();
	int tst;
	scanf("%d", &tst);
	while (tst--) {
		int n, m;
		unsigned long long sum = 0;
		scanf("%d %d", &n, &m);
		if (n==m) {
			int k = 2;
			for (int i=1; i<=n; i++) {
				sum += PRIME_MARKED(k)*i;
				k++;
			}
			for (int i=n-1; i>=1; i--) {
				sum += PRIME_MARKED(k)*i;
				k++;
			}
		} 
		else {
			int k = 2, min, max, i;
			min = (n<m? n: m);
			max = (n>m? n: m);

			for (i=1; i<=min; i++) {
				sum += PRIME_MARKED(k)*i;
				k++;
			}

			while (i<=max) {
				sum += PRIME_MARKED(k)*min;
				k++;
				i++;
			}

			for (i=min-1; i>=1; i--) {
				sum += PRIME_MARKED(k)*i;
				k++;
			}
		}
		printf("%llu\n", sum);
	}
	return 0;
} 