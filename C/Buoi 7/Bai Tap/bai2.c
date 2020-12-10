#include <stdio.h>

int isAscending(int [], int);
int main(void){
	int a[] = {1,2,3,4,5};
	int is = isAscending(a, 5);
	switch(is){
		case 1:{
			printf("Elements are in ascending order");
			break;
		}
		case 0:{
			printf("Elements are NOT in ascending order");
			break;
		}		
	} 
}
int isAscending(int arr[], int size){
	int i, is;
	for(i = 1; i < size; i++){
		if(arr[i] <= arr[i - 1]){
			is = 0;
			break;
		}
		 is = 1;
	}
	return is;
}
