#include <stdio.h>

int countDiv3(int arr[], int);
int main(void){
	int a[] = {1,3,5,7,9};
	printf("there are %d elements divisible by 3", countDiv3(a, 5));
}
int countDiv3(int arr[], int size){
	int i, a = 0;
	for(i = 0; i < size; i++){
		if(arr[i] % 3 == 0){
			a++;
		}
	}
	return a;
}
