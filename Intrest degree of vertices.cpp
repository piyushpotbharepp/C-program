/*
You are given a rooted tree with n vertices. 
There is a number written on each leaf (a vertex contains degree 1 
and the root node can be a leaf if it has just one child). 
The interest degree of each vertex is the sum of numbers written on 
leaves in subtree on this vertex. In each step, you can change the 
number written on a leaf by 1. How many steps are required to make 
the interest degree of all of the nodes equal?

Note: You can change the number written on a leaf to negative values.
*/

#include<stdio.h>
const int maxn = 1e4 + 17, mod = 1e9 + 7;

int n;

int main(){

	scanf("%d",&n);

	int pa = 1;

	for(int i = 1; i < n; i++){

		int p;

		scanf("%d",&p);

		pa &= p == i;

	}

	long long sum = 0;

	for(int i = 0; i < n; i++){

		int x;

		scanf("%d",&x);

		sum += x;

	}

	printf("%lld\n", !pa * sum );

}