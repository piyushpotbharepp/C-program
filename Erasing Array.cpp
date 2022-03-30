/*
You are given a binary array A of N elements. 
The array consists of 0's and 1's. 
You can perform the following operations as many times as possible:

Select a subarray starting from the first index that is 
inversion-free and delete it.

Determine the minimum number of operations to delete the entire array.
*/

#include<stdio.h>

int main()
{
	int t;

	scanf("%d",&t);

	while(t--){
		int n;

		int count=1;

		scanf("%d",&n);

		int arr[n];

		for(int i=0;i<n;i++){

			scanf("%d",&arr[i]);

		}

		for(int i=0;i<n-1;i++){

			if(arr[i]==1 && arr[i+1]==0)

			count++;

		}

		printf("%d\n",count);

	}

}
