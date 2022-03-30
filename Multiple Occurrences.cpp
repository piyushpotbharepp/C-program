/*
You are given an integer array A. 
Your task is to calculate the sum of absolute difference of indices of 
first and last occurrence for every integer that is present in array A.

Formally, if element x occurs m times in the array at indices B1, B2, B3, ..., B3, 
then the answer for x will be Bm - B1 if array B is sorted.

You are required to calculate the sum of the answer for every such x 
that occurs in the array.
*/

#include<stdio.h>
#define MAX 200000
void quickSort(int r[MAX],int z[MAX],int i,int j){
	int smaller=i+1,larger=j,swap,pivot,k;
	if(i>=j) return;
	while(smaller<larger){
		if(r[smaller]<=r[i]) smaller++;
		else
		{
			if(r[larger]>r[i]) larger--;
			else {
				swap=r[smaller];
				r[smaller]=r[larger];
				r[larger]=swap;
				swap=z[smaller];
				z[smaller]=z[larger];
				z[larger]=swap;
			}
		}
	}
	if(r[smaller]<=r[i]) pivot=smaller;
	else pivot=smaller-1;
	swap=r[i];
	r[i]=r[pivot];
	r[pivot]=swap;
	swap=z[i];
	z[i]=z[pivot];
	z[pivot]=swap;
	quickSort(r,z,i,pivot-1);
	quickSort(r,z,pivot+1,j);
}
void main(){
	int a[MAX],b[MAX],t,n,i,j,sum,pivot,max,min;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[i]=i;
		}
		quickSort(a,b,0,n-1);
		pivot=0;
		sum=0;
		min=-1;
		max=-1;
		for(i=0;i<n;i++){
			if(a[i]==a[pivot]){
				if(min==-1&&max==-1){
					min=b[i];
					max=b[i];
				}
				else if(b[i]<min) min=b[i];
				else if(b[i]>max) max=b[i];
			}
			if(a[i]!=a[pivot]){
				sum+=(max-min);
				pivot=i;
				min=b[pivot];
				max=b[pivot];
			}
		}
		sum+=(max-min);
		printf("\n%d",sum);
	}
} 
