/*
You have been given an array A of size N consisting of positive integers. 
You need to find and print the product of all the number in this array Modulo .
*/

#include <stdio.h>
int main(){
	int num;
	int arr[1000];
	scanf("%d",&num);
	long int answer=1;
	for(int i=0;i<num;i++){
		scanf("%d",&arr[i]);
		answer=answer*arr[i]%(1000000007);

	}

	printf("%ld",answer);
} 