#include <stdio.h>

int main(void){
	int a, *a_ptr;
	float b, *b_ptr;
	a_ptr = &a;
	b_ptr = &b;
	printf("Enter an integer: ");
	scanf("%d", a_ptr);
	printf("Enter a real number: ");
	scanf("%f", b_ptr);
	printf("Values entered are %d and %f", *a_ptr, *b_ptr);
	while(*a_ptr < *b_ptr * (*b_ptr)) {
		*a_ptr *= *b_ptr;	
	}
	printf("Final value of a: %d", *a_ptr);
}
