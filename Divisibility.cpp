/*You are provided an array A of size N that contains non-negative integers. 
Your task is to determine whether the number that is formed by selecting 
the last digit of all the N numbers is divisible by 10.
*/

#include <stdio.h>
int main()
{
	int N = 0,sum,re,temp;
	scanf("%d", &N);
	
	long data[N];
	for(auto i=0; i<N; i++)
	{   
		scanf("%ld", &data[i]);
		temp=data[i]%10;
    	sum *= 10;
		sum += temp;
		re = sum%10;
		if(re == 0)
			sum=0;
	}
	if(sum%10==0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}