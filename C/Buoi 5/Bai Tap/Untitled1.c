#include <stdio.h>

int containDigit7(int);
int sumWithout7(int);
int main(void){
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	int cD = containDigit7(n);
	printf("cD = %d", cD);
	
	int a = 0, sum = 0;
	while(a <= n){
		int e = containDigit7(a);
		if(e == 0){	
			sum += a;
		}
		a++;
	}
	printf("\nsum = %d", sum);
}
int containDigit7(int n){
	while(n != 0){
	 	int m = n - 7;
	 	if(m % 10 == 0){
			return 1;	
		}
		n = n / 10;
	}
	 return 0;
}
