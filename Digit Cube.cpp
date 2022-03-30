/*
Let  be an integer. We define a function f(n) 
which returns the cube of sum of digits of n.

You are given two integers n and k. 
You have to find the value of the integer that is 
returned when the function is recursively applied k times on n.
*/

#include <stdio.h>
unsigned long long int ndigit(unsigned long long int d){
	unsigned long long int sum=0,p;
	while(d!=0){
		sum=sum+(d%10);
		d=d/10;
	}
	p=sum * sum * sum;
	return p;
}
int main()
{
	unsigned long long int n,t,t1,st[4];
	int num;
	scanf("%d",&num);
	for(int j=0;j<num;j++){
		st[0]=0;
		st[1]=0;
		scanf("%llu %llu",&n,&t1);
		for(int i=0;i<t1;i++){
			t=ndigit(n);
			n=t;
			st[i%4]=t;
			if(st[0]==st[2] && st[1]==st[3]){
				printf("%llu\n",st[3-(t1%4)]);
				goto haha;
			}
		}
		printf("%llu\n",t);
		haha :
		continue;
	}
	return 0;
} 
