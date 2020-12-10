#include <stdio.h>

void partition(int arr[], int, int);
int main(void){
	int arr[] = {37, 13, 37, 10, 9};
	int i, b, pivot = 11;
	for(i = 0; i < 5; i++){
		if(arr[i] <= pivot){
		printf("Less than or equa %d\n ",arr[i],pivot);
		}
	}
	for(i = 0; i < 5; i++){
		if(arr[i] > pivot){
		printf("Greater than %d\n ",arr[i],pivot);
		}
	}

	partition(arr, 5, pivot);
}

void partition(int arr[], int size, int pivot){
	int i;
	for(i = 0; i < size; i++){
		if(arr[i] <= pivot);
		printf("%d ", arr[i]);
	}
}
