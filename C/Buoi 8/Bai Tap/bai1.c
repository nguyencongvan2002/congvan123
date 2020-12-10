#include <stdio.h>

int main(void){
	char F[10], M[10], L[10];
	printf("Please enter your first name: ");
	gets(F);
	printf("\nPlease enter your last name: ");
	gets(M);
	printf("\nPlease enter your middle name: ");
	gets(L);
	printf("F M L format = %s %s %s\n", F, M, L);
	printf("L M F format = %s %s %s", M,L, F);
}
