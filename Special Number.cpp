/*
A natural number is special if it consists of only digits 4 and 7. 
Find the number of pairs of ?oprime special numbers (x,y) 
such that 1<=x<=y<=N. 
*/

#include <stdio.h>
int n, k = 0;
int m[1000000];
int gcd(int fD, int sD) {
	if (fD == sD)
	return fD;
	if (fD == 0)
	return sD;
	return gcd(sD % fD, fD);
}
void f(long long int v) {
	if (v > n) return;
	if (v > 0) m[k++] = v;
	f(10 * v + 4);
	f(10 * v + 7);
}
int main() {
	scanf("%d", &n);
	f(0);
	int result = 0;
	for (int i = 0; i < k; i++)
	for (int j = i + 1; j < k; j++)
	if (gcd(m[i], m[j]) == 1) result++;
	printf("%d\n", result);
	return 0;
} 
