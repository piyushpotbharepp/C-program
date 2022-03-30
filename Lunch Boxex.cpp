/*
Alice works as a restaurant manager. 
The restaurant has prepared N lunch boxes and Alice plans 
to distribute them to some schools. 
Consider that there are M schools and an ith school orders Ai lunch boxes.
*/

#include <stdio.h>
int partition(int arr[], int left, int right)
{
	int i = left, j = right;

	int tmp;

	int pivot = arr[(left + right) / 2];



	while (i <= j) {

		while (arr[i] < pivot)

		i++;

		while (arr[j] > pivot)

		j--;

		if (i <= j) {

			tmp = arr[i];

			arr[i] = arr[j];

			arr[j] = tmp;

			i++;

			j--;

		}

	};



	return i;

}



void quickSort(int arr[], int left, int right) {

	int index = partition(arr, left, right);

	if (left < index - 1)

	quickSort(arr, left, index - 1);

	if (index < right)

	quickSort(arr, index, right);

}

int main(){
	unsigned int num;
	scanf("%u", &num);
	for(int i=0;i<num;i++){
		unsigned int ms,x;
		unsigned int nb;
		scanf("%u %u", &nb,&ms);
		unsigned int so[ms];
		for(int j =0;j<ms;j++){
			scanf("%u", &so[j]);
		}
		quickSort(so,0,ms-1);
		int temc=0,c=0;
		for(int k=0;k<ms;k++){
			if(temc < nb){
				temc=temc+so[k];
				if(temc <= nb)
				c++;
			}
			else{
				break;
			}
		}

		printf("%d\n",c);


	}
} 
