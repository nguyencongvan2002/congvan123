#include <stdio.h>

int sumLast3(int arr[], int);
int main(void){
	int a[] = {2,4,5,6,5,6,7};
	int s = sumLast3(a, 7);
	printf("sumLast3 = %d", s);
}

int sumLast3(int arr[], int size){
	int i, sum = 0;
	for(i = 0; i < size; i++){
		if(i >= size - 3){
			sum = sum + arr[i];
		}
	}
	return sum;
}
