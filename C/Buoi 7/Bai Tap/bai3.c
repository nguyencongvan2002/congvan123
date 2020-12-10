#include <stdio.h>

int greatestSum(int arr[], int);
int main(void){
	int a[] = {1,3,7,0,9};
	int gr = greatestSum(a, 5);
	printf("max = %d", gr);
}

int greatestSum(int arr[], int size){
	int i, max = 0;
	int b, max2 = 0;
	for(i = 0; i < size; i++){
		if(arr[i] >= max){
			max2 = max;
			max = arr[i];
		}
	}
	return max + max2;
}
