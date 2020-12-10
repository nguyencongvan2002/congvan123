#include <stdio.h>

int main(void){
	int x,y;
	int i,j;
	printf("nhap so phan tu cua mang 2 chieu: ");
	scanf("%d", &x);
	
	y = x;
	
	int arr[x][y];
	
	int a = 1;
	int tich1 = 1, tich2 = 1;
	
	for(i = 0; i < x; i++){
		for(j = 0; j < y; j++){
			printf("%d  ",a);
			if(i == j){
				tich1 = tich1 * a;
			}
			if(i + j == x - 1){
				tich2 = tich2 * a;
			}
			a++;
		}
		printf("\n");
	}
	
	printf("tich 1 = %d\n", tich1);
	printf("tich 2 = %d\n", tich2);
	
}
