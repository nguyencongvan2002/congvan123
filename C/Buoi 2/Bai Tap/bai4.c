#include <stdio.h>

int main(void){
	int A, B;
	printf("chieu dai A = ");
	scanf("%d", &A);
	printf("\ngia tri cua A = %d", A);
	printf("\nchie rong B = ");
	scanf("%d", &B);
	printf("\n chu vi hinh chu nhat %d, dien tich hinh chu nhat %d", (A+B)*2, A*B);	
}
