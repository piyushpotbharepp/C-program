/*
There are N students in a class and each student has a number denoted by 
an array A. The teacher will select three students and give a task to 
each of them. The first student has to find a number of subsets of 
students having cumulative xor less than K. The second student has 
to find a number of subsets of students having cumulative xor equal to K. 
The third student has to find a number of subsets of students having 
cumulative xor greater than K. Let the three numbers returned by the 
selected students are cnt1, cnt2 and cnt3.
*/

#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

long long int fun (int N ) {
    // Your code goes here
    //int n= sizeof(A);

    //printf("%lld",k);
    //printf("N%d \n",N);
    long long int k= pow(2, N*2);
    return k;
}

int main() {
    int T;
    scanf("%d", &T);
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        scanf("%d", &N);

        long long int K;
        scanf("%lld", &K);

        for(int i=0; i<N; i++){
            scanf("%lld", &K);
        }

        long long int k= 1;
        N*=2;
        while(N>0){
            k*=2;
            k=k% 1000000007;
            N--;
        }

        // long long int out_ = fun(N);
        printf("%lld", k);
        printf("\n");
    }
} 