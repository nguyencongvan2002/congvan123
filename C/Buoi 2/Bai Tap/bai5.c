##include <stdio.h>

int main(void){
	int A,B,C,D,E;
	printf("Enter 5 integers:");
	scanf("%d %d %d %d %d", &A ,&B, &C ,&D, &E);
	printf("A : %d, B : %d, C : %d, D : %d, E : %d", A, B, C, D, E);
	
	int Sum = A + B + C + D + E;
	printf("\ntong: %d", Sum);
	
	float phan_tram_A = (A*100)/Sum;
	float phan_tram_B = (B*100)/Sum;
	float phan_tram_C = (C*100)/Sum;
	float phan_tram_D = (D*100)/Sum;
	float phan_tram_E = (E*100)/Sum;
	printf("\nPercentage: %d(%f%%) %d(%f%%) %d(%f%%) %d(%f%%) %d(%f%%)", A,phan_tram_A, B,phan_tram_B, C,phan_tram_C, D,phan_tram_D, E,phan_tram_E);
