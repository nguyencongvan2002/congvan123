#include <stdio.h>

int main(void){
	int n;
	do{
		printf("\nEnter a number: ");
		scanf("%d", &n);
	}while(n <= 0);
	
	int giai_thua = 1;
	
	while(n > 0){
		printf("\ngiai_thua = %d * %d", giai_thua,n);
		giai_thua = giai_thua * n;
		n--;
		
	}
	printf("\ngiai_thua = %d", giai_thua);
}
