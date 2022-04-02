/*
You are given a string S of length N which consists of digits from 0 to 9. 
You need to find an index i such that the sub number formed by S[i..N] is divisible 
by K and the xor of all the digits in the sub number formed by S[1..(i-1)] is maximum. 
If there are multiple i's such that S[i..N] is divisible by K and for all such values of i,
S[1..i-1)] is maximum, then print the largest sub number.
*/


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define endl printf("\n")
#define input(x) scanf("%d",&x)
#define inputll(x) scanf("%lld",&x)
#define inputc(x) scanf("%c",&x);
#define inputstr(x) scanf("%s",&x);
#define and &&
#define or ||
#define ll long long
ll arr[100005];

int main(){
	int t;input(t);
	while(t--){
		ll n,k;
		inputll(n);inputll(k);
		arr[0]=1;
		for(int i=1;i<=100000;i++)arr[i] =(arr[i-1]*10)%k;
		char s[n];inputstr(s);
		ll prefix[n];prefix[0] = s[0]-'0';
		for(int i=1;i<n;i++)prefix[i] = prefix[i-1]^(s[i]-'0');
		int idx =-1;ll rem =0,maxm=0;
		for(int i=n-1;i>0;i--){
			rem=((s[i]-'0')*arr[n-i-1] + rem)%k;
			if(!rem and s[i]!='0' and prefix[i-1]>=maxm){
				idx=i;
				maxm = prefix[i-1];
			}
		}
		if(idx == -1)printf("-1");
		else for(int i=idx;i<n;i++)printf("%c",s[i]);
		endl;
	}
	return 0;
} 