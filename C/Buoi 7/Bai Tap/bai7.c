#include <stdio.h>

int isPartOf(int, int arr[],int);
int isSubset(int arrA[], int sizeA, int arrB[], int sizeB);
int main(void){
	int a[] = {54,47,10,23,34};
	int X = 10;
	int is = isPartOf(X,a, 5);
	
	if(is == 0){
		printf(" %d is NOT a part of arr\n", X);
	}else{
		printf("%d is a part of arr\n", X);
	}
	
	int j[] = {37, 13, 37, 10, 9};
	int f[] = {37, 0, 13, 37, 3, 10, 9};
	int  r = isSubset(j,5,f,7);
	if(r == 1){
		printf("arrA is a subset of arrB\n");
	}else{
		printf("arrA is NOT a subset of arrB\n");
	}
}

int isPartOf(int X, int arr[], int size){
	int i;
	int flag = 0;
	for(i = 0; i < size; i++){
		if(arr[i] == X){
			flag = 1;
		}
	}
	return flag;	
}

int isSubset(int arrA[], int sizeA, int arrB[], int sizeB){
	int i;
	int flag = 1;
	for(i = 0; i < sizeA; i++){
		int x = arrA[i];
		int c = isPartOf(x,arrB,sizeB);
		if(c == 0){
			flag = 0;
		}
	}
	return flag;
}
