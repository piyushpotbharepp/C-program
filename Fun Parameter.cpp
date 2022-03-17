// Understanding Function Parameter in C Language

#include <stdio.h>
int main(){
	int x,y,result;
	x = 3;
	y = 12;
	result = sum_up(x,y);
	printf("%d + %d = %d",x,y,result);
	return 0;
}
int sum_up(int x, int y){
	x += y;
	return(x);
}