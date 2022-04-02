/*
You are given N boxes that are kept in a straight line. 
You are also given M colors such that (M<=N). You cannot change 
the position of boxes. Determine the number of ways to color 
the boxes such that if you select any M consecutive boxes then 
the color of each box is unique.

Since the number could be large, print the answer modulo 10^9 + 7.
*/

#include <stdio.h>
int main(){
	unsigned long long int N, M, ways, fact;
	scanf("%llu %llu", &N , &M);
	fact= 1;
	while(M>0){
		fact = fact*M;
		fact= fact%1000000007;
		M-=1;
	}
	printf("%llu", fact);

} 