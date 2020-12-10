#include <stdio.h>

int main(void){
	int arr[2][2] = {{1,2},{-2,3}};
	int i,d, min = 0;
	min = arr[0][0];
	for(i = 0; i < 2 ;i++){
		for(d = 0; d < 2; d++){
			if(arr[i][d] < min){
			min = arr[i][d];
		}
		}
	}
	printf("min = %d", min);
}
